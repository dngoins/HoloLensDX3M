// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Devices.WiFiDirect.3.h"
#include "Windows.Devices.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>
{
    HRESULT __stdcall get_InformationElements(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InformationElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InformationElements(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>> value) noexcept override
    {
        try
        {
            this->shim().InformationElements(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListenStateDiscoverability());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value) noexcept override
    {
        try
        {
            this->shim().ListenStateDiscoverability(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAutonomousGroupOwnerEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAutonomousGroupOwnerEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAutonomousGroupOwnerEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsAutonomousGroupOwnerEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LegacySettings(abi_arg_out<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LegacySettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
{
    HRESULT __stdcall get_SupportedConfigurationMethods(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>
{
    HRESULT __stdcall get_Advertisement(abi_arg_out<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Advertisement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::WiFiDirect::WiFiDirectError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>
{
    HRESULT __stdcall add_ConnectionRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ConnectionRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().ConnectionRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>
{
    HRESULT __stdcall get_GroupOwnerIntent(int16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GroupOwnerIntent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GroupOwnerIntent(int16_t value) noexcept override
    {
        try
        {
            this->shim().GroupOwnerIntent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>
{
    HRESULT __stdcall get_PreferenceOrderedConfigurationMethods(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferenceOrderedConfigurationMethods());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreferredPairingProcedure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value) noexcept override
    {
        try
        {
            this->shim().PreferredPairingProcedure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>
{
    HRESULT __stdcall abi_GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod configurationMethod, Windows::Devices::Enumeration::DevicePairingKinds * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDevicePairingKinds(configurationMethod));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>
{
    HRESULT __stdcall get_DeviceInformation(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>
{
    HRESULT __stdcall abi_GetConnectionRequest(abi_arg_out<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConnectionRequest());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDevice> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDevice>
{
    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ConnectionStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ConnectionStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConnectionEndpointPairs(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectionEndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> deviceSelector) noexcept override
    {
        try
        {
            *deviceSelector = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>
{
    HRESULT __stdcall abi_GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType type, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelector(type));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_in<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> connectionParameters, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId), *reinterpret_cast<const Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters *>(&connectionParameters)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>
{
    HRESULT __stdcall get_Oui(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Oui());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Oui(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().Oui(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuiType(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OuiType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuiType(uint8_t value) noexcept override
    {
        try
        {
            this->shim().OuiType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>
{
    HRESULT __stdcall abi_CreateFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromDeviceInformation(abi_arg_in<Windows::Devices::Enumeration::IDeviceInformation> deviceInformation, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromDeviceInformation(*reinterpret_cast<const Windows::Devices::Enumeration::DeviceInformation *>(&deviceInformation)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> : produce_base<D, Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>
{
    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ssid(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ssid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ssid(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Ssid(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Passphrase(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Passphrase());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Passphrase(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().Passphrase(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::WiFiDirect {

template <typename D> hstring impl_IWiFiDirectDeviceStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector;
    check_hresult(static_cast<const IWiFiDirectDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> impl_IWiFiDirectDeviceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> asyncOp;
    check_hresult(static_cast<const IWiFiDirectDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(asyncOp)));
    return asyncOp;
}

template <typename D> hstring impl_IWiFiDirectDeviceStatics2<D>::GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType type) const
{
    hstring result;
    check_hresult(static_cast<const IWiFiDirectDeviceStatics2 &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(type, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> impl_IWiFiDirectDeviceStatics2<D>::FromIdAsync(hstring_ref deviceId, const Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters & connectionParameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> result;
    check_hresult(static_cast<const IWiFiDirectDeviceStatics2 &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), get(connectionParameters), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> impl_IWiFiDirectInformationElementStatics<D>::CreateFromBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> result;
    check_hresult(static_cast<const IWiFiDirectInformationElementStatics &>(static_cast<const D &>(*this))->abi_CreateFromBuffer(get(buffer), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> impl_IWiFiDirectInformationElementStatics<D>::CreateFromDeviceInformation(const Windows::Devices::Enumeration::DeviceInformation & deviceInformation) const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> result;
    check_hresult(static_cast<const IWiFiDirectInformationElementStatics &>(static_cast<const D &>(*this))->abi_CreateFromDeviceInformation(get(deviceInformation), put(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectInformationElement<D>::Oui() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->get_Oui(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectInformationElement<D>::Oui(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->put_Oui(get(value)));
}

template <typename D> uint8_t impl_IWiFiDirectInformationElement<D>::OuiType() const
{
    uint8_t value {};
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->get_OuiType(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectInformationElement<D>::OuiType(uint8_t value) const
{
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->put_OuiType(value));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IWiFiDirectInformationElement<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectInformationElement<D>::Value(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IWiFiDirectInformationElement &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> bool impl_IWiFiDirectLegacySettings<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectLegacySettings<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> hstring impl_IWiFiDirectLegacySettings<D>::Ssid() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->get_Ssid(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectLegacySettings<D>::Ssid(hstring_ref value) const
{
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->put_Ssid(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IWiFiDirectLegacySettings<D>::Passphrase() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->get_Passphrase(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectLegacySettings<D>::Passphrase(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IWiFiDirectLegacySettings &>(static_cast<const D &>(*this))->put_Passphrase(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> impl_IWiFiDirectAdvertisement<D>::InformationElements() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> value;
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->get_InformationElements(put(value)));
    return value;
}

template <typename D> void impl_IWiFiDirectAdvertisement<D>::InformationElements(const Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> & value) const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->put_InformationElements(get(value)));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability impl_IWiFiDirectAdvertisement<D>::ListenStateDiscoverability() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value {};
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->get_ListenStateDiscoverability(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectAdvertisement<D>::ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability value) const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->put_ListenStateDiscoverability(value));
}

template <typename D> bool impl_IWiFiDirectAdvertisement<D>::IsAutonomousGroupOwnerEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->get_IsAutonomousGroupOwnerEnabled(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectAdvertisement<D>::IsAutonomousGroupOwnerEnabled(bool value) const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->put_IsAutonomousGroupOwnerEnabled(value));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectLegacySettings impl_IWiFiDirectAdvertisement<D>::LegacySettings() const
{
    Windows::Devices::WiFiDirect::WiFiDirectLegacySettings value { nullptr };
    check_hresult(static_cast<const IWiFiDirectAdvertisement &>(static_cast<const D &>(*this))->get_LegacySettings(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> impl_IWiFiDirectAdvertisement2<D>::SupportedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> value;
    check_hresult(static_cast<const IWiFiDirectAdvertisement2 &>(static_cast<const D &>(*this))->get_SupportedConfigurationMethods(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus impl_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus value {};
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisherStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectError impl_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::WiFiDirect::WiFiDirectError value {};
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisherStatusChangedEventArgs &>(static_cast<const D &>(*this))->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisement impl_IWiFiDirectAdvertisementPublisher<D>::Advertisement() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisement value { nullptr };
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->get_Advertisement(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus impl_IWiFiDirectAdvertisementPublisher<D>::Status() const
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus value {};
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> event_token impl_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->add_StatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectAdvertisementPublisher> impl_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectAdvertisementPublisher>(this, &ABI::Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void impl_IWiFiDirectAdvertisementPublisher<D>::StatusChanged(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->remove_StatusChanged(token));
}

template <typename D> void impl_IWiFiDirectAdvertisementPublisher<D>::Start() const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IWiFiDirectAdvertisementPublisher<D>::Stop() const
{
    check_hresult(static_cast<const IWiFiDirectAdvertisementPublisher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> Windows::Devices::Enumeration::DevicePairingKinds impl_IWiFiDirectConnectionParametersStatics<D>::GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod configurationMethod) const
{
    Windows::Devices::Enumeration::DevicePairingKinds result {};
    check_hresult(static_cast<const IWiFiDirectConnectionParametersStatics &>(static_cast<const D &>(*this))->abi_GetDevicePairingKinds(configurationMethod, &result));
    return result;
}

template <typename D> int16_t impl_IWiFiDirectConnectionParameters<D>::GroupOwnerIntent() const
{
    int16_t value {};
    check_hresult(static_cast<const IWiFiDirectConnectionParameters &>(static_cast<const D &>(*this))->get_GroupOwnerIntent(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectConnectionParameters<D>::GroupOwnerIntent(int16_t value) const
{
    check_hresult(static_cast<const IWiFiDirectConnectionParameters &>(static_cast<const D &>(*this))->put_GroupOwnerIntent(value));
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> impl_IWiFiDirectConnectionParameters2<D>::PreferenceOrderedConfigurationMethods() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> value;
    check_hresult(static_cast<const IWiFiDirectConnectionParameters2 &>(static_cast<const D &>(*this))->get_PreferenceOrderedConfigurationMethods(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure impl_IWiFiDirectConnectionParameters2<D>::PreferredPairingProcedure() const
{
    Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value {};
    check_hresult(static_cast<const IWiFiDirectConnectionParameters2 &>(static_cast<const D &>(*this))->get_PreferredPairingProcedure(&value));
    return value;
}

template <typename D> void impl_IWiFiDirectConnectionParameters2<D>::PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure value) const
{
    check_hresult(static_cast<const IWiFiDirectConnectionParameters2 &>(static_cast<const D &>(*this))->put_PreferredPairingProcedure(value));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest impl_IWiFiDirectConnectionRequestedEventArgs<D>::GetConnectionRequest() const
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest result { nullptr };
    check_hresult(static_cast<const IWiFiDirectConnectionRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetConnectionRequest(put(result)));
    return result;
}

template <typename D> event_token impl_IWiFiDirectConnectionListener<D>::ConnectionRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectConnectionListener &>(static_cast<const D &>(*this))->add_ConnectionRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectConnectionListener> impl_IWiFiDirectConnectionListener<D>::ConnectionRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectConnectionListener>(this, &ABI::Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener::remove_ConnectionRequested, ConnectionRequested(handler));
}

template <typename D> void impl_IWiFiDirectConnectionListener<D>::ConnectionRequested(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectConnectionListener &>(static_cast<const D &>(*this))->remove_ConnectionRequested(token));
}

template <typename D> Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus impl_IWiFiDirectDevice<D>::ConnectionStatus() const
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus value {};
    check_hresult(static_cast<const IWiFiDirectDevice &>(static_cast<const D &>(*this))->get_ConnectionStatus(&value));
    return value;
}

template <typename D> hstring impl_IWiFiDirectDevice<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiDirectDevice &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_IWiFiDirectDevice<D>::ConnectionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWiFiDirectDevice &>(static_cast<const D &>(*this))->add_ConnectionStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWiFiDirectDevice> impl_IWiFiDirectDevice<D>::ConnectionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IWiFiDirectDevice>(this, &ABI::Windows::Devices::WiFiDirect::IWiFiDirectDevice::remove_ConnectionStatusChanged, ConnectionStatusChanged(handler));
}

template <typename D> void impl_IWiFiDirectDevice<D>::ConnectionStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IWiFiDirectDevice &>(static_cast<const D &>(*this))->remove_ConnectionStatusChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> impl_IWiFiDirectDevice<D>::GetConnectionEndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value;
    check_hresult(static_cast<const IWiFiDirectDevice &>(static_cast<const D &>(*this))->abi_GetConnectionEndpointPairs(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IWiFiDirectConnectionRequest<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IWiFiDirectConnectionRequest &>(static_cast<const D &>(*this))->get_DeviceInformation(put(value)));
    return value;
}

inline WiFiDirectAdvertisementPublisher::WiFiDirectAdvertisementPublisher() :
    WiFiDirectAdvertisementPublisher(activate_instance<WiFiDirectAdvertisementPublisher>())
{}

inline WiFiDirectConnectionListener::WiFiDirectConnectionListener() :
    WiFiDirectConnectionListener(activate_instance<WiFiDirectConnectionListener>())
{}

inline WiFiDirectConnectionParameters::WiFiDirectConnectionParameters() :
    WiFiDirectConnectionParameters(activate_instance<WiFiDirectConnectionParameters>())
{}

inline Windows::Devices::Enumeration::DevicePairingKinds WiFiDirectConnectionParameters::GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod configurationMethod)
{
    return get_activation_factory<WiFiDirectConnectionParameters, IWiFiDirectConnectionParametersStatics>().GetDevicePairingKinds(configurationMethod);
}

inline hstring WiFiDirectDevice::GetDeviceSelector()
{
    return get_activation_factory<WiFiDirectDevice, IWiFiDirectDeviceStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> WiFiDirectDevice::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<WiFiDirectDevice, IWiFiDirectDeviceStatics>().FromIdAsync(deviceId);
}

inline hstring WiFiDirectDevice::GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType type)
{
    return get_activation_factory<WiFiDirectDevice, IWiFiDirectDeviceStatics2>().GetDeviceSelector(type);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> WiFiDirectDevice::FromIdAsync(hstring_ref deviceId, const Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters & connectionParameters)
{
    return get_activation_factory<WiFiDirectDevice, IWiFiDirectDeviceStatics2>().FromIdAsync(deviceId, connectionParameters);
}

inline WiFiDirectInformationElement::WiFiDirectInformationElement() :
    WiFiDirectInformationElement(activate_instance<WiFiDirectInformationElement>())
{}

inline Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> WiFiDirectInformationElement::CreateFromBuffer(const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<WiFiDirectInformationElement, IWiFiDirectInformationElementStatics>().CreateFromBuffer(buffer);
}

inline Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> WiFiDirectInformationElement::CreateFromDeviceInformation(const Windows::Devices::Enumeration::DeviceInformation & deviceInformation)
{
    return get_activation_factory<WiFiDirectInformationElement, IWiFiDirectInformationElementStatics>().CreateFromDeviceInformation(deviceInformation);
}

}

}
