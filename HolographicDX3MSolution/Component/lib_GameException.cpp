#include "Precompiled.h"
#include "lib_GameException.h"

namespace MatMeshMod
{
	namespace Library
	{
		GameException::GameException(const char* const& message, HRESULT hr)
			: exception(message), mHR(hr)
		{
		}

		HRESULT GameException::HR() const
		{
			return mHR;
		}

		std::wstring GameException::whatw() const
		{
			std::string whatString(what());
			std::wstring whatw;
			whatw.assign(whatString.begin(), whatString.end());

			return whatw;
		}
	}
}