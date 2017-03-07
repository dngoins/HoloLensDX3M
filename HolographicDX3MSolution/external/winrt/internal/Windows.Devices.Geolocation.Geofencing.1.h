// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Geolocation.Geofencing.0.h"
#include "Windows.Devices.Geolocation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Geolocation::Geofencing {

struct __declspec(uuid("9c090823-edb8-47e0-8245-5bf61d321f2d")) __declspec(novtable) IGeofence : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_DwellTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_MonitoredStates(winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates * value) = 0;
    virtual HRESULT __stdcall get_Geoshape(Windows::Devices::Geolocation::IGeoshape ** value) = 0;
    virtual HRESULT __stdcall get_SingleUse(bool * value) = 0;
};

struct __declspec(uuid("841f624b-325f-4b90-bca7-2b8022a93796")) __declspec(novtable) IGeofenceFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring id, Windows::Devices::Geolocation::IGeoshape * geoshape, Windows::Devices::Geolocation::Geofencing::IGeofence ** geofence) = 0;
    virtual HRESULT __stdcall abi_CreateWithMonitorStates(hstring id, Windows::Devices::Geolocation::IGeoshape * geoshape, winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Devices::Geolocation::Geofencing::IGeofence ** geofence) = 0;
    virtual HRESULT __stdcall abi_CreateWithMonitorStatesAndDwellTime(hstring id, Windows::Devices::Geolocation::IGeoshape * geoshape, winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, Windows::Devices::Geolocation::Geofencing::IGeofence ** geofence) = 0;
    virtual HRESULT __stdcall abi_CreateWithMonitorStatesDwellTimeStartTimeAndDuration(hstring id, Windows::Devices::Geolocation::IGeoshape * geoshape, winrt::Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, Windows::Devices::Geolocation::Geofencing::IGeofence ** geofence) = 0;
};

struct __declspec(uuid("4c0f5f78-1c1f-4621-bbbd-833b92247226")) __declspec(novtable) IGeofenceMonitor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus * value) = 0;
    virtual HRESULT __stdcall get_Geofences(Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> ** value) = 0;
    virtual HRESULT __stdcall get_LastKnownGeoposition(Windows::Devices::Geolocation::IGeoposition ** value) = 0;
    virtual HRESULT __stdcall add_GeofenceStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> * eventHandler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_GeofenceStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_ReadReports(Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> ** value) = 0;
    virtual HRESULT __stdcall add_StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::IInspectable> * eventHandler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(event_token token) = 0;
};

struct __declspec(uuid("2dd32fcf-7e75-4899-ace3-2bd0a65cce06")) __declspec(novtable) IGeofenceMonitorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor ** value) = 0;
};

struct __declspec(uuid("9a243c18-2464-4c89-be05-b3ffff5babc5")) __declspec(novtable) IGeofenceStateChangeReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NewState(winrt::Windows::Devices::Geolocation::Geofencing::GeofenceState * value) = 0;
    virtual HRESULT __stdcall get_Geofence(Windows::Devices::Geolocation::Geofencing::IGeofence ** value) = 0;
    virtual HRESULT __stdcall get_Geoposition(Windows::Devices::Geolocation::IGeoposition ** value) = 0;
    virtual HRESULT __stdcall get_RemovalReason(winrt::Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Geolocation::Geofencing::Geofence> { using default_interface = Windows::Devices::Geolocation::Geofencing::IGeofence; };
template <> struct traits<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor> { using default_interface = Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor; };
template <> struct traits<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> { using default_interface = Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport; };

}

namespace Windows::Devices::Geolocation::Geofencing {

template <typename T> struct impl_IGeofence;
template <typename T> struct impl_IGeofenceFactory;
template <typename T> struct impl_IGeofenceMonitor;
template <typename T> struct impl_IGeofenceMonitorStatics;
template <typename T> struct impl_IGeofenceStateChangeReport;

}

namespace impl {

template <> struct traits<Windows::Devices::Geolocation::Geofencing::IGeofence>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::IGeofence;
    template <typename D> using consume = Windows::Devices::Geolocation::Geofencing::impl_IGeofence<D>;
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceFactory;
    template <typename D> using consume = Windows::Devices::Geolocation::Geofencing::impl_IGeofenceFactory<D>;
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor;
    template <typename D> using consume = Windows::Devices::Geolocation::Geofencing::impl_IGeofenceMonitor<D>;
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics;
    template <typename D> using consume = Windows::Devices::Geolocation::Geofencing::impl_IGeofenceMonitorStatics<D>;
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport;
    template <typename D> using consume = Windows::Devices::Geolocation::Geofencing::impl_IGeofenceStateChangeReport<D>;
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::Geofence>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::Geofence;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Geolocation.Geofencing.Geofence"; }
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::GeofenceMonitor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor"; }
};

template <> struct traits<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>
{
    using abi = ABI::Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport"; }
};

}

}
