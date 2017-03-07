// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.System.Power.Diagnostics.3.h"
#include "Windows.System.Power.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>
{
    HRESULT __stdcall get_DeviceSpecificConversionFactor(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceSpecificConversionFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ComputeTotalEnergyUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ComputeTotalEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetTotalEnergyUsage() noexcept override
    {
        try
        {
            this->shim().ResetTotalEnergyUsage();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> : produce_base<D, Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>
{
    HRESULT __stdcall get_DeviceSpecificConversionFactor(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceSpecificConversionFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ComputeTotalEnergyUsage(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ComputeTotalEnergyUsage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ResetTotalEnergyUsage() noexcept override
    {
        try
        {
            this->shim().ResetTotalEnergyUsage();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Power::Diagnostics {

template <typename D> double impl_IBackgroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
{
    double value {};
    check_hresult(static_cast<const IBackgroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->get_DeviceSpecificConversionFactor(&value));
    return value;
}

template <typename D> uint64_t impl_IBackgroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IBackgroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->abi_ComputeTotalEnergyUsage(&value));
    return value;
}

template <typename D> void impl_IBackgroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
{
    check_hresult(static_cast<const IBackgroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->abi_ResetTotalEnergyUsage());
}

template <typename D> double impl_IForegroundEnergyDiagnosticsStatics<D>::DeviceSpecificConversionFactor() const
{
    double value {};
    check_hresult(static_cast<const IForegroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->get_DeviceSpecificConversionFactor(&value));
    return value;
}

template <typename D> uint64_t impl_IForegroundEnergyDiagnosticsStatics<D>::ComputeTotalEnergyUsage() const
{
    uint64_t value {};
    check_hresult(static_cast<const IForegroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->abi_ComputeTotalEnergyUsage(&value));
    return value;
}

template <typename D> void impl_IForegroundEnergyDiagnosticsStatics<D>::ResetTotalEnergyUsage() const
{
    check_hresult(static_cast<const IForegroundEnergyDiagnosticsStatics &>(static_cast<const D &>(*this))->abi_ResetTotalEnergyUsage());
}

inline double BackgroundEnergyDiagnostics::DeviceSpecificConversionFactor()
{
    return get_activation_factory<BackgroundEnergyDiagnostics, IBackgroundEnergyDiagnosticsStatics>().DeviceSpecificConversionFactor();
}

inline uint64_t BackgroundEnergyDiagnostics::ComputeTotalEnergyUsage()
{
    return get_activation_factory<BackgroundEnergyDiagnostics, IBackgroundEnergyDiagnosticsStatics>().ComputeTotalEnergyUsage();
}

inline void BackgroundEnergyDiagnostics::ResetTotalEnergyUsage()
{
    get_activation_factory<BackgroundEnergyDiagnostics, IBackgroundEnergyDiagnosticsStatics>().ResetTotalEnergyUsage();
}

inline double ForegroundEnergyDiagnostics::DeviceSpecificConversionFactor()
{
    return get_activation_factory<ForegroundEnergyDiagnostics, IForegroundEnergyDiagnosticsStatics>().DeviceSpecificConversionFactor();
}

inline uint64_t ForegroundEnergyDiagnostics::ComputeTotalEnergyUsage()
{
    return get_activation_factory<ForegroundEnergyDiagnostics, IForegroundEnergyDiagnosticsStatics>().ComputeTotalEnergyUsage();
}

inline void ForegroundEnergyDiagnostics::ResetTotalEnergyUsage()
{
    get_activation_factory<ForegroundEnergyDiagnostics, IForegroundEnergyDiagnosticsStatics>().ResetTotalEnergyUsage();
}

}

}
