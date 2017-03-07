// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Spi.0.h"
#include "Windows.Devices.Spi.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Spi {

struct __declspec(uuid("9929444a-54f2-48c6-b952-9c32fc02c669")) __declspec(novtable) ISpiBusInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChipSelectLineCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MinClockFrequency(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxClockFrequency(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SupportedDataBitLengths(Windows::Foundation::Collections::IVectorView<int32_t> ** value) = 0;
};

struct __declspec(uuid("5283a37f-f935-4b9f-a7a7-3a7890afa5ce")) __declspec(novtable) ISpiConnectionSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChipSelectLine(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ChipSelectLine(int32_t value) = 0;
    virtual HRESULT __stdcall get_Mode(winrt::Windows::Devices::Spi::SpiMode * value) = 0;
    virtual HRESULT __stdcall put_Mode(winrt::Windows::Devices::Spi::SpiMode value) = 0;
    virtual HRESULT __stdcall get_DataBitLength(int32_t * value) = 0;
    virtual HRESULT __stdcall put_DataBitLength(int32_t value) = 0;
    virtual HRESULT __stdcall get_ClockFrequency(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ClockFrequency(int32_t value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Devices::Spi::SpiSharingMode * value) = 0;
    virtual HRESULT __stdcall put_SharingMode(winrt::Windows::Devices::Spi::SpiSharingMode value) = 0;
};

struct __declspec(uuid("ff99081e-10c4-44b7-9fea-a748b5a46f31")) __declspec(novtable) ISpiConnectionSettingsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(int32_t chipSelectLine, Windows::Devices::Spi::ISpiConnectionSettings ** value) = 0;
};

struct __declspec(uuid("a8d3c829-9895-4159-a934-8741f1ee6d27")) __declspec(novtable) ISpiController : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDevice(Windows::Devices::Spi::ISpiConnectionSettings * settings, Windows::Devices::Spi::ISpiDevice ** device) = 0;
};

struct __declspec(uuid("0d5229e2-138b-4e48-b964-4f2f79b9c5a2")) __declspec(novtable) ISpiControllerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiController> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetControllersAsync(Windows::Devices::Spi::Provider::ISpiProvider * provider, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Spi::SpiController>> ** operation) = 0;
};

struct __declspec(uuid("05d5356d-11b6-4d39-84d5-95dfb4c9f2ce")) __declspec(novtable) ISpiDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_ConnectionSettings(Windows::Devices::Spi::ISpiConnectionSettings ** value) = 0;
    virtual HRESULT __stdcall abi_Write(uint32_t __bufferSize, uint8_t * buffer) = 0;
    virtual HRESULT __stdcall abi_Read(uint32_t __bufferSize, uint8_t * buffer) = 0;
    virtual HRESULT __stdcall abi_TransferSequential(uint32_t __writeBufferSize, uint8_t * writeBuffer, uint32_t __readBufferSize, uint8_t * readBuffer) = 0;
    virtual HRESULT __stdcall abi_TransferFullDuplex(uint32_t __writeBufferSize, uint8_t * writeBuffer, uint32_t __readBufferSize, uint8_t * readBuffer) = 0;
};

struct __declspec(uuid("a278e559-5720-4d3f-bd93-56f5ff5a5879")) __declspec(novtable) ISpiDeviceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromFriendlyName(hstring friendlyName, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetBusInfo(hstring busId, Windows::Devices::Spi::ISpiBusInfo ** busInfo) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring busId, Windows::Devices::Spi::ISpiConnectionSettings * settings, Windows::Foundation::IAsyncOperation<Windows::Devices::Spi::SpiDevice> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Spi::SpiBusInfo> { using default_interface = Windows::Devices::Spi::ISpiBusInfo; };
template <> struct traits<Windows::Devices::Spi::SpiConnectionSettings> { using default_interface = Windows::Devices::Spi::ISpiConnectionSettings; };
template <> struct traits<Windows::Devices::Spi::SpiController> { using default_interface = Windows::Devices::Spi::ISpiController; };
template <> struct traits<Windows::Devices::Spi::SpiDevice> { using default_interface = Windows::Devices::Spi::ISpiDevice; };

}

namespace Windows::Devices::Spi {

template <typename T> struct impl_ISpiBusInfo;
template <typename T> struct impl_ISpiConnectionSettings;
template <typename T> struct impl_ISpiConnectionSettingsFactory;
template <typename T> struct impl_ISpiController;
template <typename T> struct impl_ISpiControllerStatics;
template <typename T> struct impl_ISpiDevice;
template <typename T> struct impl_ISpiDeviceStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::Spi::ISpiBusInfo>
{
    using abi = ABI::Windows::Devices::Spi::ISpiBusInfo;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiBusInfo<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiConnectionSettings>
{
    using abi = ABI::Windows::Devices::Spi::ISpiConnectionSettings;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiConnectionSettings<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiConnectionSettingsFactory>
{
    using abi = ABI::Windows::Devices::Spi::ISpiConnectionSettingsFactory;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiConnectionSettingsFactory<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiController>
{
    using abi = ABI::Windows::Devices::Spi::ISpiController;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiController<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiControllerStatics>
{
    using abi = ABI::Windows::Devices::Spi::ISpiControllerStatics;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiControllerStatics<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiDevice>
{
    using abi = ABI::Windows::Devices::Spi::ISpiDevice;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiDevice<D>;
};

template <> struct traits<Windows::Devices::Spi::ISpiDeviceStatics>
{
    using abi = ABI::Windows::Devices::Spi::ISpiDeviceStatics;
    template <typename D> using consume = Windows::Devices::Spi::impl_ISpiDeviceStatics<D>;
};

template <> struct traits<Windows::Devices::Spi::SpiBusInfo>
{
    using abi = ABI::Windows::Devices::Spi::SpiBusInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Spi.SpiBusInfo"; }
};

template <> struct traits<Windows::Devices::Spi::SpiConnectionSettings>
{
    using abi = ABI::Windows::Devices::Spi::SpiConnectionSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Spi.SpiConnectionSettings"; }
};

template <> struct traits<Windows::Devices::Spi::SpiController>
{
    using abi = ABI::Windows::Devices::Spi::SpiController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Spi.SpiController"; }
};

template <> struct traits<Windows::Devices::Spi::SpiDevice>
{
    using abi = ABI::Windows::Devices::Spi::SpiDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Spi.SpiDevice"; }
};

}

}
