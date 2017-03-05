#pragma once

#include <type_traits>

template <typename Traits>
class HandleStrings
{
	using Pointer = typename Traits::Pointer;

	Pointer m_value;

	void Close() noexcept
	{
		if (*this)
		{
			Traits::Close(m_value);
		}
	}

public:
	//copy constructor removed:
	HandleStrings(HandleStrings const &) = delete;

	// Assignment operator removed:
	HandleStrings & operator=(HandleStrings const &) = delete;

	//explicit default constructor to initialize with invlaid HandleStrings
	explicit HandleStrings(Pointer value = Traits::Invalid()) noexcept:
	m_value(value)
	{

	}

	HandleStrings(HandleStrings && other)noexcept :
	m_value(other.Detach())
	{

	}

	HandleStrings & operator=(HandleStrings && other) noexcept
	{
		if (this != &other)
		{
			Attach(other.Detach());
		}
		return *this;
	}

	~HandleStrings() noexcept
	{
		Close();
	}

	explicit operator bool() const noexcept
	{
		return m_value != Traits::Invalid();

	}

	Pointer Get() const noexcept
	{
		return m_value;
	}

	Pointer * GetAddressOf() noexcept
	{
		ASSERT(!*this);
		return &m_value;
	}

	Pointer Detach() noexcept
	{
		Pointer value = m_value;
		m_value = Traits::Invalid();
		return value;
	}

	bool Attach(Pointer value = Traits::Invalid()) noexcept
	{
		if (m_value != value)
		{
			Close();
			m_value = value;
		}

		return static_cast<bool>(*this);
	}

	void Swap(HandleStrings & other) noexcept
	{
		std::swap(m_value, other.m_value);
	}


};

template <typename Traits>
void swap(HandleStrings<Traits> & left,
	HandleStrings<Traits> & right) noexcept
{
	left.swap(right);
}


struct StringTraits
{
	using Pointer = HSTRING;
	static Pointer Invalid() noexcept
	{
		return nullptr;
	}

	static void Close(Pointer value)noexcept
	{
		VERIFY_(S_OK, WindowsDeleteString(value));
	}
};

using String = HandleStrings<StringTraits>;

String CreateString(wchar_t const * const string,
	unsigned const length)
{
	String result;
	HR(WindowsCreateString(string,
		length,
		result.GetAddressOf()));

	return result;
}

template <unsigned Count>
String CreateString(wchar_t const (&string)[Count])
{
	return CreateString(string, Count - 1);
}

wchar_t const * Buffer(String const & string) noexcept
{
	return WindowsGetStringRawBuffer(string.Get(), nullptr);
}

wchar_t const * Buffer(String const & string,
	unsigned & length) noexcept
{
	return WindowsGetStringRawBuffer(string.Get(), &length);
}

unsigned Length(String const & string) noexcept
{
	return WindowsGetStringLen(string.Get());
}

bool Empty(String const & string) noexcept
{
	return 0 != WindowsIsStringEmpty(string.Get());
}

String Duplicate(String const & string)
{
	String result;
	HR(WindowsDuplicateString(string.Get(),
		result.GetAddressOf()));

	return result;
}

String Substring(String const & string,
	unsigned const start)
{
	String result;
	HR(WindowsSubstring(string.Get(),
		start,
		result.GetAddressOf()));

	return result;
}


struct StringBufferTraits
{
	using Pointer = HSTRING_BUFFER;
	static Pointer Invalid() noexcept
	{
		return nullptr;
	}

	static void Close(Pointer value) noexcept
	{
		VERIFY_(S_OK, WindowsDeleteStringBuffer(value));
	}

};

using StringBuffer = HandleStrings<StringBufferTraits>;

template <typename ... Args>
String Format(wchar_t const * format, Args ... args)
{
	//problem is we don't know how long format string will be
	//vs.net takes the undefined option to help out size
	// this is undefined but works in VS.NEt
	int const size = swprintf(nullptr, 0, format, args ...);

	if(-1 == size)
	{
		throw ComException(E_INVALIDARG);
	}

	if (0 == size)
	{
		//nullptr is treated like empty string in vs.net
		return String();
	}

	StringBuffer buffer;
	wchar_t * target = nullptr;

	HR(WindowsPreallocateStringBuffer(size,
		&target,
		buffer.GetAddressOf()));

	swprintf(target, size + 1, format, args ...);

	String result;

	//not safe to detach here
	HR(WindowsPromoteStringBuffer(buffer.Get(),
		result.GetAddressOf()));

	buffer.Detach();
	return result;

}