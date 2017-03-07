// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Embedded.DeviceLockdown.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> phProfileName) noexcept override
    {
        try
        {
            *phProfileName = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *phProfileName = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
{
    HRESULT __stdcall abi_GetSupportedLockdownProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<GUID>> ppProfileIDs) noexcept override
    {
        try
        {
            *ppProfileIDs = detach(this->shim().GetSupportedLockdownProfiles());
            return S_OK;
        }
        catch (...)
        {
            *ppProfileIDs = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentLockdownProfile(GUID * pProfileID) noexcept override
    {
        try
        {
            *pProfileID = detach(this->shim().GetCurrentLockdownProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ApplyLockdownProfileAsync(GUID profileID, abi_arg_out<Windows::Foundation::IAsyncAction> ppWaitableOperation) noexcept override
    {
        try
        {
            *ppWaitableOperation = detach(this->shim().ApplyLockdownProfileAsync(profileID));
            return S_OK;
        }
        catch (...)
        {
            *ppWaitableOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLockdownProfileInformation(GUID profileID, abi_arg_out<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> ppInformation) noexcept override
    {
        try
        {
            *ppInformation = detach(this->shim().GetLockdownProfileInformation(profileID));
            return S_OK;
        }
        catch (...)
        {
            *ppInformation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Embedded::DeviceLockdown {

template <typename D> hstring impl_IDeviceLockdownProfileInformation<D>::Name() const
{
    hstring phProfileName;
    check_hresult(static_cast<const IDeviceLockdownProfileInformation &>(static_cast<const D &>(*this))->get_Name(put(phProfileName)));
    return phProfileName;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> impl_IDeviceLockdownProfileStatics<D>::GetSupportedLockdownProfiles() const
{
    Windows::Foundation::Collections::IVectorView<GUID> ppProfileIDs;
    check_hresult(static_cast<const IDeviceLockdownProfileStatics &>(static_cast<const D &>(*this))->abi_GetSupportedLockdownProfiles(put(ppProfileIDs)));
    return ppProfileIDs;
}

template <typename D> GUID impl_IDeviceLockdownProfileStatics<D>::GetCurrentLockdownProfile() const
{
    GUID pProfileID {};
    check_hresult(static_cast<const IDeviceLockdownProfileStatics &>(static_cast<const D &>(*this))->abi_GetCurrentLockdownProfile(&pProfileID));
    return pProfileID;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDeviceLockdownProfileStatics<D>::ApplyLockdownProfileAsync(GUID profileID) const
{
    Windows::Foundation::IAsyncAction ppWaitableOperation;
    check_hresult(static_cast<const IDeviceLockdownProfileStatics &>(static_cast<const D &>(*this))->abi_ApplyLockdownProfileAsync(profileID, put(ppWaitableOperation)));
    return ppWaitableOperation;
}

template <typename D> Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation impl_IDeviceLockdownProfileStatics<D>::GetLockdownProfileInformation(GUID profileID) const
{
    Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation ppInformation { nullptr };
    check_hresult(static_cast<const IDeviceLockdownProfileStatics &>(static_cast<const D &>(*this))->abi_GetLockdownProfileInformation(profileID, put(ppInformation)));
    return ppInformation;
}

inline Windows::Foundation::Collections::IVectorView<GUID> DeviceLockdownProfile::GetSupportedLockdownProfiles()
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetSupportedLockdownProfiles();
}

inline GUID DeviceLockdownProfile::GetCurrentLockdownProfile()
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetCurrentLockdownProfile();
}

inline Windows::Foundation::IAsyncAction DeviceLockdownProfile::ApplyLockdownProfileAsync(GUID profileID)
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().ApplyLockdownProfileAsync(profileID);
}

inline Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation DeviceLockdownProfile::GetLockdownProfileInformation(GUID profileID)
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetLockdownProfileInformation(profileID);
}

}

}
