#include "Precompiled.h"
#include "MatMeshMod.h"
#include "Implements.h"
#include "HandleStrings.h"
#include <activation.h>
#include <winstring.h>
#include <windows.ui.h>
#include <windows.ui.core.h>
#include <CorError.h>
#include <wrl\client.h>
#include <set>
#include <memory>
#include <vector>

#pragma comment(lib, "runtimeobject")

namespace collections = ABI::Windows::Foundation::Collections;


static long s_serverLock;

class Lock
{
	SRWLOCK m_lock = {};

public:
	Lock() noexcept = default;
	Lock(Lock const &) = delete;
	Lock & operator= (Lock const &) = delete;

	void Enter() noexcept
	{
		AcquireSRWLockExclusive(&m_lock);
	}

	void Exit() noexcept
	{
		ReleaseSRWLockExclusive(&m_lock);
	}

};

// this will hold a lock for the duration of some scope
class LockGuard
{
	Lock & m_lock ;

public:
	LockGuard(LockGuard const &) = delete;
	LockGuard & operator=(LockGuard const &) = delete;

	explicit LockGuard(Lock & lock) noexcept: m_lock(lock)
	{
		m_lock.Enter();
	}

	~LockGuard() noexcept
	{
		m_lock.Exit();
	}
};


template <typename T>
class EventHandler
{
	using Pointer = Microsoft::WRL::ComPtr<T>;
	using Set = std::set<Pointer>;

	//makes the ability to exchange sets thread safe - even though shared_ptr isn't
	using Handlers = std::shared_ptr<Set>;

	Lock m_lock;
	Handlers m_handlers;

public:
	EventHandler() noexcept = default;
	EventHandler(EventHandler const &) = delete;
	EventHandler & operator=(EventHandler const &) = delete;

	HRESULT Add(T * handler, EventRegistrationToken * token) noexcept
	{
		try
		{
			Handlers local = std::make_shared<Set>();
			local->insert(handler);
			LockGuard guard(m_lock);

			if(Set const * const set = m_handlers.get())
			{
				local->insert(set->begin(), set->end());
			}
			m_handlers = std::move(local);
			token->value = reinterpret_cast<long long>(handler);

		}
		catch (std::bad_alloc const &)
		{
			return E_OUTOFMEMORY;
		}
		return S_OK;
	}

	HRESULT Remove(EventRegistrationToken const token) noexcept
	{
		try
		{
			Handlers local = std::make_shared<Set>();
			LockGuard guard(m_lock);

			if(Set const * const set = m_handlers.get())
			{
				local->insert(set->begin(), set->end());
			}

			local->erase(reinterpret_cast<T *>(token.value));
			m_handlers = std::move(local);

		}
		catch (std::bad_alloc const &)
		{
			return E_OUTOFMEMORY;
		}
		return S_OK;
	}

	template <typename ... Args>
	void Invoke(Args const & ... args) noexcept
	{
		//try to treat set as immutable 
		//then we don't need a lock here
		Handlers reference = m_handlers;

		if (Set * set = reference.get())
		{
			for (Pointer const & handler : *set)
			{
				handler->Invoke(args ...);
			}
		}
	}

};

struct BroodIterator : Implements<collections::IIterator<HSTRING>>
{
	Microsoft::WRL::ComPtr<collections::IVectorView<HSTRING>> m_container;
	unsigned m_index = 0;

	BroodIterator(collections::IVectorView<HSTRING> * container): m_container(container)
	{
		
	}

	virtual HRESULT __stdcall get_Current(HSTRING * current) noexcept
	{
		return m_container->GetAt(m_index, current);
	}

	virtual HRESULT __stdcall get_HasCurrent(boolean * hasCurrent) noexcept
	{
		unsigned size = 0;
		m_container->get_Size(&size);

		*hasCurrent = m_index < size;
		return S_OK;
	}

	virtual HRESULT __stdcall MoveNext(boolean * hasCurrent) noexcept
	{
		unsigned size = 0;
		m_container->get_Size(&size);

		if(m_index + 1 < size)
		{
			++m_index;
			*hasCurrent = true;
		}
		else
		{
			*hasCurrent = false;
		}
		return S_OK;
	}
};

//RT Doesn't support multiple inheritance so to fake it
// we just build up VTable of methods
//IVectorView also requires IIterable to be implemented
struct Brood : Implements<collections::IVectorView<HSTRING>,
	collections::IIterable<HSTRING>>
{
	std::vector<std::wstring> m_names =
	{
		L"Test1", L"Test2", L"Test3", L"Test4"
	};

	virtual HRESULT __stdcall GetAt(unsigned index,
		HSTRING * item) noexcept
	{
		*item = nullptr;
		if(index >= m_names.size())
		{
			return E_INVALIDARG;
		}

		return WindowsCreateString(m_names[index].c_str(),
			static_cast<unsigned>(m_names[index].size()),
			item);

	}

	virtual HRESULT __stdcall get_Size(unsigned * size) noexcept
	{
		//use static cast so we can bypass warning about loss of data for
		//64bit data
		*size = static_cast<unsigned>(m_names.size());
		return S_OK;
	}

	virtual HRESULT __stdcall IndexOf(HSTRING value,
		unsigned * index,
		boolean *found) noexcept
	{
		wchar_t const * const name = WindowsGetStringRawBuffer(value, nullptr);
		auto iterator = std::find(begin(m_names), end(m_names), name);

		*index = static_cast<unsigned> (iterator - begin(m_names));

		*found = *index < m_names.size();
		return S_OK;

	}

	virtual HRESULT __stdcall First(collections::IIterator<HSTRING> **first) noexcept
	{
		*first = new (std::nothrow) BroodIterator((collections::IVectorView<HSTRING> *)this);
		return *first ? S_OK : E_OUTOFMEMORY;
		
	}
};


namespace MatMeshMod {
	struct Model : Implements<ABI::MatMeshMod::IModel>
	{

	private:
		bool m_hasMeshes = false;
		bool m_hasMats = false;
		bool m_hasAnims = false;

	public:
		Model() : Model(nullptr, false)
		{
		}

		explicit Model(ABI::Windows::Foundation::Collections::IVectorView<byte> * modelFileData, boolean flipUVs) noexcept
		{
			ASSERT(modelFileData);
			InterlockedIncrement(&s_serverLock);
			
		}

		~Model() noexcept
		{
			InterlockedDecrement(&s_serverLock);
		}

		HRESULT __stdcall get_HasMeshes(boolean * hasMeshes)
		{
			*hasMeshes = m_hasMeshes;
			return S_OK;
		}

		HRESULT __stdcall get_HasMaterials(boolean * hasMaterials)
		{
			*hasMaterials = m_hasMats;
			return S_OK;
		}

		HRESULT __stdcall get_HasAnimations(boolean * hasAnimations)
		{
			*hasAnimations = m_hasAnims;
			return S_OK;
		}

		HRESULT __stdcall get_Meshes(__FIVectorView_1_MatMeshMod__CIMesh  ** meshes)
		{
			*meshes = nullptr;


			return S_OK;
		}

		HRESULT __stdcall get_Materials(__FIVectorView_1_MatMeshMod__CIModelMaterial ** materials)
		{
			*materials = nullptr;


			return S_OK;
		}


	};

	struct ModelFactory : Implements<IActivationFactory, ABI::MatMeshMod::IModelFactory>
	{
		ModelFactory() noexcept
		{
			InterlockedIncrement(&s_serverLock);
		}

		~ModelFactory() noexcept
		{
			InterlockedDecrement(&s_serverLock);

		}

		HRESULT __stdcall ActivateInstance(IInspectable ** instance) noexcept
		{
			*instance = static_cast<ABI::MatMeshMod::IModel *>(new (std::nothrow) Model);

			return *instance ? S_OK : E_OUTOFMEMORY;
		}

		HRESULT __stdcall CreateModel(ABI::Windows::Foundation::Collections::IVectorView<byte> * modelFileData,  boolean flipUVs,
			ABI::MatMeshMod::IModel ** instance) noexcept
		{
			*instance = new (std::nothrow) Model(modelFileData, flipUVs);
			return *instance ? S_OK : E_OUTOFMEMORY;
		}


	};

struct ModelMaterial : Implements<ABI::MatMeshMod::IModelMaterial>
	{

	private:
		ABI::MatMeshMod::IModel * m_model;

	public:
		ModelMaterial() noexcept : ModelMaterial(nullptr)
		{		}

		explicit ModelMaterial(ABI::MatMeshMod::IModel * model) noexcept : m_model(model)
		{
			ASSERT(model);
			InterlockedIncrement(&s_serverLock);
		}

		~ModelMaterial() noexcept
		{
			InterlockedDecrement(&s_serverLock);
		}

		HRESULT __stdcall get_Model(ABI::MatMeshMod::IModel ** model)
		{	
			*model = m_model;
			

			return S_OK;
		}

	};

	struct ModelMaterialFactory : Implements<IActivationFactory, ABI::MatMeshMod::IModelMaterialFactory>
	{
		ModelMaterialFactory() noexcept
		{
			InterlockedIncrement(&s_serverLock);
		}

		~ModelMaterialFactory() noexcept
		{
			InterlockedDecrement(&s_serverLock);

		}

		HRESULT __stdcall ActivateInstance(IInspectable ** instance) noexcept
		{
			*instance = static_cast<ABI::MatMeshMod::IModelMaterial *>(new (std::nothrow) ModelMaterial);

			return *instance ? S_OK : E_OUTOFMEMORY;
		}

		HRESULT __stdcall CreateModelMaterial(ABI::MatMeshMod::IModel * model, 			ABI::MatMeshMod::IModelMaterial ** instance) noexcept
		{
			*instance = new (std::nothrow) ModelMaterial(model);
			return *instance ? S_OK : E_OUTOFMEMORY;
		}


	};

}

HRESULT __stdcall DllCanUnloadNow() noexcept
{
	return s_serverLock ? S_FALSE : S_OK;
}


HRESULT __stdcall DllGetActivationFactory(HSTRING classid,
	IActivationFactory ** factory) noexcept
{
	if (0 == wcscmp(RuntimeClass_MatMeshMod_Model, WindowsGetStringRawBuffer(classid, nullptr)))
	{
		*factory = new (std::nothrow) MatMeshMod::ModelFactory;

		return *factory ? S_OK : E_OUTOFMEMORY;
	}
	else if (0 == wcscmp(RuntimeClass_MatMeshMod_ModelMaterial, WindowsGetStringRawBuffer(classid, nullptr)))
	{
		*factory = new (std::nothrow) MatMeshMod::ModelMaterialFactory;

		return *factory ? S_OK : E_OUTOFMEMORY;
	}


	*factory = nullptr;
	return CLASS_E_CLASSNOTAVAILABLE;
		
}