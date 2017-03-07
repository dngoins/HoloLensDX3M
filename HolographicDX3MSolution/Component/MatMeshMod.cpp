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
#include "lib_Model.h"
#include "lib_Mesh.h"
#include "lib_VertexDeclarations.h"
#include "lib_ColorHelper.h"
#include <windows.foundation.h>
#include <windows.foundation.collections.h>

#pragma comment(lib, "runtimeobject")

namespace collections = ABI::Windows::Foundation::Collections;
namespace Lib = MatMeshMod::Library;
namespace MMM = ABI::MatMeshMod;


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

namespace MatMeshMod 
{
	class Mesh : public Implements<MMM::IMesh>
	{
	public:
		 virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Model( 
                    /* [out][retval] */ ABI::MatMeshMod::IModel **currentModel) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ModelMaterial( 
                    /* [out][retval] */ ABI::MatMeshMod::IModelMaterial **currentMaterial) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
                    /* [out][retval] */ HSTRING *name) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Vertices( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **vertices) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Normals( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **normals) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Tangents( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **tangents) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BiNormals( 
                    /* [out][retval] */ __FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **binormals) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TextureCoordinates( 
                    /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CVector3 **textureCoordinates) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VertexColors( 
                    /* [out][retval] */ __FIVectorView_1___FIVectorView_1_Windows__CFoundation__CNumerics__CQuaternion **vertexColors) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Indices( 
                    /* [out][retval] */ __FIVectorView_1_UINT32 **indices) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FaceCount( 
                    /* [out][retval] */ unsigned int *faceCount) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMeshes( 
                    /* [out][retval] */ boolean *hasMeshes) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasMaterials( 
                    /* [out][retval] */ boolean *hasMaterials) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasAnimations( 
                    /* [out][retval] */ boolean *hasAnimations) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Meshes( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIMesh **meshes) noexcept  {  return S_OK; }
                
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Materials( 
                    /* [out][retval] */ __FIVectorView_1_MatMeshMod__CIModelMaterial **materials) noexcept  {  return S_OK; }
               
	};

	class MeshIterator : public Implements<collections::IIterator<MMM::IMesh *>>
	{
		ComPtr<collections::IVectorView<MMM::IMesh *>> m_container;
		unsigned m_index = 0;

	public:
		//virtual /* propget */ HRESULT STDMETHODCALLTYPE get_Current(_Out_ T_abi *current) = 0;
		//virtual /* propget */ HRESULT STDMETHODCALLTYPE get_HasCurrent(_Out_ boolean *hasCurrent) = 0;
		//virtual HRESULT STDMETHODCALLTYPE MoveNext(_Out_ boolean *hasCurrent) = 0;
		//virtual HRESULT STDMETHODCALLTYPE GetMany(_In_ unsigned capacity, _Out_writes_to_(capacity, *actual) T_abi *value, _Out_ unsigned *actual) = 0;

		
		MeshIterator(collections::IVectorView<MMM::IMesh *> * container) : m_container(container)
		{

		}

		virtual HRESULT __stdcall get_Current(MMM::IMesh ** current) noexcept
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

			if (m_index + 1 < size)
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

		virtual HRESULT STDMETHODCALLTYPE GetMany( unsigned capacity, MMM::IMesh *value, unsigned *actual) noexcept
		{
			return S_OK;
		}
	};

	//RT Doesn't support multiple inheritance so to fake it
	// we just build up VTable of methods
	//IVectorView also requires IIterable to be implemented
	class Meshes : public Implements<collections::IVectorView<MMM::IMesh *>, collections::IIterable<MMM::IMesh *>>
	{
		std::vector<Lib::Mesh *> m_meshes;
	
	public:
		Meshes(std::vector<Lib::Mesh*> meshes) : m_meshes(meshes)
		{

		}

		virtual HRESULT __stdcall GetAt(unsigned index,
			MMM::IMesh * item) noexcept
		{
			item = nullptr;
			if (index >= m_meshes.size())
			{
				return E_INVALIDARG;
			}

	//		item = m_meshes.at(index);

			return S_OK;
		}

		virtual HRESULT __stdcall get_Size(unsigned * size) noexcept
		{
			//use static cast so we can bypass warning about loss of data for
			//64bit data
			*size = static_cast<unsigned>(m_meshes.size());
			return S_OK;
		}

		//virtual HRESULT STDMETHODCALLTYPE GetAt(_In_ unsigned index, _Out_ T_abi *item) = 0;
		//virtual /* propget */ HRESULT STDMETHODCALLTYPE get_Size(_Out_ unsigned *size) = 0;
		//virtual HRESULT STDMETHODCALLTYPE IndexOf(_In_opt_ T_abi value, _Out_ unsigned *index, _Out_ boolean *found) = 0;
		//virtual HRESULT STDMETHODCALLTYPE GetMany(_In_  unsigned startIndex, _In_ unsigned capacity, _Out_writes_to_(capacity, *actual) T_abi *value, _Out_ unsigned *actual) = 0;

		virtual HRESULT __stdcall IndexOf(MMM::IMesh * value,
			unsigned * index,
			boolean *found) noexcept
		{
			//wchar_t const * const name = WindowsGetStringRawBuffer(value, nullptr);
			//auto iterator = std::find(begin(m_names), end(m_names), name);

			//*index = static_cast<unsigned> (iterator - begin(m_names));

			//*found = *index < m_names.size();
			return S_OK;

		}

		virtual HRESULT __stdcall First(collections::IIterator<MMM::IMesh *> **first) noexcept
		{
			*first = new (std::nothrow) MeshIterator((collections::IVectorView<MMM::IMesh *> *)this);
			return *first ? S_OK : E_OUTOFMEMORY;

		}

		virtual HRESULT STDMETHODCALLTYPE GetMany(unsigned startIndex, unsigned capacity, MMM::IMesh  **value, unsigned *actual) noexcept
		{
			return S_OK;
		}

	};

	
	class Model : public Implements<MMM::IModel>
	{

	private:
		bool m_hasMeshes = false;
		bool m_hasMats = false;
		bool m_hasAnims = false;
		std::unique_ptr<Lib::Model>				m_lib_model;
		ComPtr<ID3D11Buffer>					m_vertexBuffer;
		std::vector<Lib::Mesh*>					m_lib_meshes;

		void CreateVertexBuffer(ID3D11Device* device, const Lib::Mesh& mesh, ID3D11Buffer** vertexBuffer) const
		{
			const std::vector<XMFLOAT3>& sourceVertices = mesh.Vertices();

			std::vector<Lib::VertexPositionColor> vertices;
			vertices.reserve(sourceVertices.size());
			if (mesh.VertexColors().size() > 0)
			{
				std::vector<XMFLOAT4>* vertexColors = mesh.VertexColors().at(0);
				assert(vertexColors->size() == sourceVertices.size());

				for (UINT i = 0; i < sourceVertices.size(); i++)
				{
					XMFLOAT3 position = sourceVertices.at(i);
					XMFLOAT4 color4 = vertexColors->at(i);
					//XMFLOAT3 color = { color4.w, color4.x, color4.y };

					vertices.push_back(Library::VertexPositionColor(XMFLOAT4(position.x, position.y, position.z, 1.0f), color4));
				}
			}
			else
			{
				for (UINT i = 0; i < sourceVertices.size(); i++)
				{
					XMFLOAT3 position = sourceVertices.at(i);
					XMFLOAT4 color4 = Lib::ColorHelper::RandomColor();
					//XMFLOAT3 color = { color4.w, color4.x, color4.y };

					vertices.push_back(Library::VertexPositionColor(XMFLOAT4(position.x, position.y, position.z, 1.0f), color4));
				}
			}

			D3D11_BUFFER_DESC vertexBufferDesc;
			ZeroMemory(&vertexBufferDesc, sizeof(vertexBufferDesc));
			vertexBufferDesc.ByteWidth = sizeof(Library::VertexPositionColor) * vertices.size();
			vertexBufferDesc.Usage = D3D11_USAGE_IMMUTABLE;
			vertexBufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			D3D11_SUBRESOURCE_DATA vertexSubResourceData;
			ZeroMemory(&vertexSubResourceData, sizeof(vertexSubResourceData));
			vertexSubResourceData.pSysMem = &vertices[0];
			device->CreateBuffer(&vertexBufferDesc, &vertexSubResourceData, vertexBuffer);
			//, "ID3D11Device::CreateBuffer() failed.");
		}


	public:
		Model() : Model(nullptr, false)
		{
		}

		explicit Model(ABI::Windows::Foundation::Collections::IVectorView<byte> * modelFileData, boolean flipUVs) noexcept
		{
			//make sure content exists
			ASSERT(modelFileData);
			
			//Add Ref count
			InterlockedIncrement(&s_serverLock);

			//Get File Size
			size_t fileSize = 0;
			HR(modelFileData->get_Size(&fileSize));

			//Construct the ASSImporter Model by passing in file
			//content into memory
			 m_lib_model = std::make_unique<Lib::Model>(LPVOID(&modelFileData[0]), fileSize, false);

			 //Check to see if content has meshes and mats
			 m_hasMeshes = m_lib_model->HasMeshes();
			 m_hasMats = m_lib_model->HasMaterials();
			 
			 if (m_hasMeshes)
			 {
				 //Get the list of meshes
				 m_lib_meshes = std::vector<Lib::Mesh *>(begin(m_lib_model->Meshes()), end(m_lib_model->Meshes()));

				 //Now get the first mesh and create 
				 // an index buffer
				 // Create vertex and index buffers for the model
				 auto mesh = m_lib_meshes.at(0);

				
			//	CreateVertexBuffer(m_deviceResources->GetD3DDevice(), *mesh, &m_vertexBuffer);
				//mesh->CreateIndexBuffer(m_deviceResources->GetD3DDevice(), &m_indexBuffer);
				//m_indexCount = mesh->Indices().size();
				//m_modelLoaded = true;
			 }
		}

		~Model() noexcept
		{
			InterlockedDecrement(&s_serverLock);
		}

		HRESULT __stdcall get_HasMeshes(boolean * hasMeshes) noexcept
		{
			*hasMeshes = m_hasMeshes;
			return S_OK;
		}

		HRESULT __stdcall get_HasMaterials(boolean * hasMaterials) noexcept
		{
			*hasMaterials = m_hasMats;
			return S_OK;
		}

		HRESULT __stdcall get_HasAnimations(boolean * hasAnimations) noexcept
		{
			*hasAnimations = m_hasAnims;
			return S_OK;
		}

		HRESULT __stdcall get_Meshes(__FIVectorView_1_MatMeshMod__CIMesh  ** meshes) noexcept
		{
			*meshes = nullptr;
			try
			{
			//	*meshes = (ABI::Windows::Foundation::Collections::IVectorView<MMM::Mesh *> *)new Meshes(m_lib_meshes);
				return S_OK;
			}
			catch (std::bad_alloc const *)
			{
				*meshes = nullptr;
				return E_OUTOFMEMORY;
			}

			return S_OK;
		}

		HRESULT __stdcall get_Materials(__FIVectorView_1_MatMeshMod__CIModelMaterial ** materials)
		{
			*materials = nullptr;


			return S_OK;
		}


	};

	class ModelFactory : public Implements<IActivationFactory, MMM::IModelFactory>
	{
	public:
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

	class ModelMaterial : public Implements<MMM::IModelMaterial>
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
		
	class ModelMaterialFactory : public Implements<IActivationFactory, MMM::IModelMaterialFactory>
	{
	public:
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
			*instance = (ABI::MatMeshMod::IModelMaterial *)(new (std::nothrow) ModelMaterial);

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