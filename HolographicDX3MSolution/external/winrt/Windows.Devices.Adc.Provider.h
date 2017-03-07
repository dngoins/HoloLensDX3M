// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Adc.Provider.3.h"
#include "Windows.Devices.Adc.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Adc::Provider::IAdcControllerProvider> : produce_base<D, Windows::Devices::Adc::Provider::IAdcControllerProvider>
{
    HRESULT __stdcall get_ChannelCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChannelCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionInBits(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResolutionInBits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinValue(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChannelMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) noexcept override
    {
        try
        {
            this->shim().ChannelMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsChannelModeSupported(channelMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquireChannel(int32_t channel) noexcept override
    {
        try
        {
            this->shim().AcquireChannel(channel);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleaseChannel(int32_t channel) noexcept override
    {
        try
        {
            this->shim().ReleaseChannel(channel);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValue(int32_t channelNumber, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadValue(channelNumber));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Adc::Provider::IAdcProvider> : produce_base<D, Windows::Devices::Adc::Provider::IAdcProvider>
{
    HRESULT __stdcall abi_GetControllers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetControllers());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Adc::Provider {

template <typename D> int32_t impl_IAdcControllerProvider<D>::ChannelCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->get_ChannelCount(&value));
    return value;
}

template <typename D> int32_t impl_IAdcControllerProvider<D>::ResolutionInBits() const
{
    int32_t value {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->get_ResolutionInBits(&value));
    return value;
}

template <typename D> int32_t impl_IAdcControllerProvider<D>::MinValue() const
{
    int32_t value {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->get_MinValue(&value));
    return value;
}

template <typename D> int32_t impl_IAdcControllerProvider<D>::MaxValue() const
{
    int32_t value {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->get_MaxValue(&value));
    return value;
}

template <typename D> Windows::Devices::Adc::Provider::ProviderAdcChannelMode impl_IAdcControllerProvider<D>::ChannelMode() const
{
    Windows::Devices::Adc::Provider::ProviderAdcChannelMode value {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->get_ChannelMode(&value));
    return value;
}

template <typename D> void impl_IAdcControllerProvider<D>::ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) const
{
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->put_ChannelMode(value));
}

template <typename D> bool impl_IAdcControllerProvider<D>::IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode) const
{
    bool result {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->abi_IsChannelModeSupported(channelMode, &result));
    return result;
}

template <typename D> void impl_IAdcControllerProvider<D>::AcquireChannel(int32_t channel) const
{
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->abi_AcquireChannel(channel));
}

template <typename D> void impl_IAdcControllerProvider<D>::ReleaseChannel(int32_t channel) const
{
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->abi_ReleaseChannel(channel));
}

template <typename D> int32_t impl_IAdcControllerProvider<D>::ReadValue(int32_t channelNumber) const
{
    int32_t result {};
    check_hresult(static_cast<const IAdcControllerProvider &>(static_cast<const D &>(*this))->abi_ReadValue(channelNumber, &result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> impl_IAdcProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> result;
    check_hresult(static_cast<const IAdcProvider &>(static_cast<const D &>(*this))->abi_GetControllers(put(result)));
    return result;
}

}

}
