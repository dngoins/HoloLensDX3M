#pragma once

#include <wrl.h>
#include <type_traits>
#include "debug.h"

using Microsoft::WRL::ComPtr;

template<typename T>
struct Cloaked : T {};

template <typename ... Interfaces>
class __declspec(novtable) Implements : public Interfaces ...
{
	long m_references = 1;

	template <typename T>
	struct IsCloaked : std::false_type {};

	template <typename T>
	struct IsCloaked<Cloaked<T>> : std::true_type {};

	template <int = 0>
	void * QueryInterface(GUID const & ) noexcept
	{
		return nullptr;
	}

	template <typename First, typename ... Rest>
	void * QueryInterface(GUID const & id) noexcept
	{
		if (id == __uuidof(First))
		{
			return static_cast<First *>(this);
		}

		return QueryInterface<Rest ...>(id);
	}

	template<typename First, typename ... Rest>
	void * BaseQueryInterface(GUID const & id) noexcept
	{
		if (id == __uuidof(First) ||
			id == __uuidof(IUnknown) ||
			std::is_base_of<IInspectable, First>::value && id == __uuidof(IInspectable))
		{

			return static_cast<First *>(this);
		}

		return QueryInterface<Rest ...>(id);
	}

	template<int = 0>
	void CopyInterfaces(GUID * const) noexcept {}

	template<typename First, typename ... Rest>
	void CopyInterfaces(GUID * ids) noexcept
	{
#pragma warning (push)
#pragma warning(disable:4127) // conditional expression const

		if (!IsCloaked<First>::value)
		{
			*ids++ = __uuidof(First);
		}
#pragma warning(pop)

		CopyInterfaces<Rest ...>(ids);
	}

	template<int = 0>
	unsigned CountInterfaces() noexcept { return 0; }

	template<typename First, typename ... Rest>
	unsigned CountInterfaces() noexcept
	{
		return !IsCloaked<First>::value + CountInterfaces<Rest ...>();
	}


protected:
	virtual ~Implements() noexcept {}

public:
	unsigned long __stdcall AddRef() noexcept
	{
		return InterlockedIncrement(&m_references);
	}

	unsigned long __stdcall Release() noexcept
	{
		unsigned long const count = InterlockedDecrement(&m_references);

		if (0 == count)
		{
			delete this;
		}

		return count;
	}

	HRESULT __stdcall QueryInterface(GUID const & id,
		void ** object) noexcept
	{
		*object = BaseQueryInterface<Interfaces ...>(id);

		if (!*object)
		{
			return E_NOINTERFACE;
		}
		static_cast<IUnknown *>(*object)->AddRef();
		return S_OK;
	}

	HRESULT __stdcall GetIids(unsigned long * pCount,
		GUID ** pIds) noexcept
	{
		*pCount = 0;
		*pIds = nullptr;

		//Now must take into account cloaked interfaces
		//unsigned const count = sizeof ... (Interfaces);
		unsigned const count = CountInterfaces<Interfaces ...>();

		if (0 == count)
			return S_OK;

		GUID * ids = static_cast<GUID *>(CoTaskMemAlloc(sizeof(GUID) * count));

		if (!ids)
		{
			return E_OUTOFMEMORY;
		}

		CopyInterfaces<Interfaces ...>(ids);

		*pCount = count;
		*pIds = ids;

		return S_OK;
	}


	HRESULT __stdcall GetRuntimeClassName(HSTRING *) noexcept
	{
		return E_NOTIMPL;
	}

	HRESULT __stdcall GetTrustLevel(TrustLevel * level) noexcept
	{
		*level = BaseTrust;
		return S_OK;
	}

};

template <typename T>
ComPtr<T> Make() noexcept
{
	ComPtr<T> result;
	result.Attach(new (std::nothrow) T);
	return result;
}
