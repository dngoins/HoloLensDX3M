// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Services.Maps.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_58d33d10_e2ef_59f1_b85e_a8819ff0d926
#define WINRT_GENERIC_58d33d10_e2ef_59f1_b85e_a8819ff0d926
template <> struct __declspec(uuid("58d33d10-e2ef-59f1-b85e-a8819ff0d926")) __declspec(novtable) IVectorView<Windows::Services::Maps::MapLocation> : impl_IVectorView<Windows::Services::Maps::MapLocation> {};
#endif

#ifndef WINRT_GENERIC_a3f56695_468f_55ef_b184_c98b4cc7e484
#define WINRT_GENERIC_a3f56695_468f_55ef_b184_c98b4cc7e484
template <> struct __declspec(uuid("a3f56695-468f-55ef-b184-c98b4cc7e484")) __declspec(novtable) IVectorView<Windows::Services::Maps::MapRouteManeuver> : impl_IVectorView<Windows::Services::Maps::MapRouteManeuver> {};
#endif

#ifndef WINRT_GENERIC_f9976360_b3b0_5a88_b1b6_f4339bb85bf0
#define WINRT_GENERIC_f9976360_b3b0_5a88_b1b6_f4339bb85bf0
template <> struct __declspec(uuid("f9976360-b3b0-5a88-b1b6-f4339bb85bf0")) __declspec(novtable) IVectorView<Windows::Services::Maps::MapRouteLeg> : impl_IVectorView<Windows::Services::Maps::MapRouteLeg> {};
#endif

#ifndef WINRT_GENERIC_265676a9_4a33_5d29_971e_8244a021b84e
#define WINRT_GENERIC_265676a9_4a33_5d29_971e_8244a021b84e
template <> struct __declspec(uuid("265676a9-4a33-5d29-971e-8244a021b84e")) __declspec(novtable) IVectorView<Windows::Services::Maps::MapRoute> : impl_IVectorView<Windows::Services::Maps::MapRoute> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_e5e5ee33_abd8_5695_9fe5_ac95850d7198
#define WINRT_GENERIC_e5e5ee33_abd8_5695_9fe5_ac95850d7198
template <> struct __declspec(uuid("e5e5ee33-abd8-5695-9fe5-ac95850d7198")) __declspec(novtable) IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> : impl_IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> {};
#endif

#ifndef WINRT_GENERIC_ecaa3e7f_c526_5097_b624_cf743d78a9ba
#define WINRT_GENERIC_ecaa3e7f_c526_5097_b624_cf743d78a9ba
template <> struct __declspec(uuid("ecaa3e7f-c526-5097-b624-cf743d78a9ba")) __declspec(novtable) IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> : impl_IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e7617fc9_2cc7_5bd1_bc5a_f47260834ed8
#define WINRT_GENERIC_e7617fc9_2cc7_5bd1_bc5a_f47260834ed8
template <> struct __declspec(uuid("e7617fc9-2cc7-5bd1-bc5a-f47260834ed8")) __declspec(novtable) IIterable<Windows::Devices::Geolocation::Geopoint> : impl_IIterable<Windows::Devices::Geolocation::Geopoint> {};
#endif

#ifndef WINRT_GENERIC_2a704d9a_3997_5f1e_8641_883eba408726
#define WINRT_GENERIC_2a704d9a_3997_5f1e_8641_883eba408726
template <> struct __declspec(uuid("2a704d9a-3997-5f1e-8641-883eba408726")) __declspec(novtable) IIterator<Windows::Services::Maps::MapLocation> : impl_IIterator<Windows::Services::Maps::MapLocation> {};
#endif

#ifndef WINRT_GENERIC_77da6151_0763_508a_9041_3310baace575
#define WINRT_GENERIC_77da6151_0763_508a_9041_3310baace575
template <> struct __declspec(uuid("77da6151-0763-508a-9041-3310baace575")) __declspec(novtable) IIterable<Windows::Services::Maps::MapLocation> : impl_IIterable<Windows::Services::Maps::MapLocation> {};
#endif

#ifndef WINRT_GENERIC_a7ab048b_a6dc_5e4c_9321_71b0e465dfe8
#define WINRT_GENERIC_a7ab048b_a6dc_5e4c_9321_71b0e465dfe8
template <> struct __declspec(uuid("a7ab048b-a6dc-5e4c-9321-71b0e465dfe8")) __declspec(novtable) IIterator<Windows::Services::Maps::MapRouteManeuver> : impl_IIterator<Windows::Services::Maps::MapRouteManeuver> {};
#endif

#ifndef WINRT_GENERIC_de9015fb_91d7_556e_bb4d_200b6f58fad4
#define WINRT_GENERIC_de9015fb_91d7_556e_bb4d_200b6f58fad4
template <> struct __declspec(uuid("de9015fb-91d7-556e-bb4d-200b6f58fad4")) __declspec(novtable) IIterable<Windows::Services::Maps::MapRouteManeuver> : impl_IIterable<Windows::Services::Maps::MapRouteManeuver> {};
#endif

#ifndef WINRT_GENERIC_dd1be7d2_de62_5752_b2e0_a2b08723b787
#define WINRT_GENERIC_dd1be7d2_de62_5752_b2e0_a2b08723b787
template <> struct __declspec(uuid("dd1be7d2-de62-5752-b2e0-a2b08723b787")) __declspec(novtable) IIterator<Windows::Services::Maps::MapRouteLeg> : impl_IIterator<Windows::Services::Maps::MapRouteLeg> {};
#endif

#ifndef WINRT_GENERIC_8ff98759_78cd_56e8_877b_83ce846d6f8b
#define WINRT_GENERIC_8ff98759_78cd_56e8_877b_83ce846d6f8b
template <> struct __declspec(uuid("8ff98759-78cd-56e8-877b-83ce846d6f8b")) __declspec(novtable) IIterable<Windows::Services::Maps::MapRouteLeg> : impl_IIterable<Windows::Services::Maps::MapRouteLeg> {};
#endif

#ifndef WINRT_GENERIC_97e8485a_79c0_5343_93d1_47cdfb55246b
#define WINRT_GENERIC_97e8485a_79c0_5343_93d1_47cdfb55246b
template <> struct __declspec(uuid("97e8485a-79c0-5343-93d1-47cdfb55246b")) __declspec(novtable) IIterator<Windows::Services::Maps::MapRoute> : impl_IIterator<Windows::Services::Maps::MapRoute> {};
#endif

#ifndef WINRT_GENERIC_d88a62a2_0edf_5312_97a8_10aeaea80b99
#define WINRT_GENERIC_d88a62a2_0edf_5312_97a8_10aeaea80b99
template <> struct __declspec(uuid("d88a62a2-0edf-5312-97a8-10aeaea80b99")) __declspec(novtable) IIterable<Windows::Services::Maps::MapRoute> : impl_IIterable<Windows::Services::Maps::MapRoute> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_26ceeb11_1221_5c2b_bbf9_cfea3663c2ed
#define WINRT_GENERIC_26ceeb11_1221_5c2b_bbf9_cfea3663c2ed
template <> struct __declspec(uuid("26ceeb11-1221-5c2b-bbf9-cfea3663c2ed")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Services::Maps::MapLocationFinderResult> : impl_AsyncOperationCompletedHandler<Windows::Services::Maps::MapLocationFinderResult> {};
#endif

#ifndef WINRT_GENERIC_6e7a2b4f_811c_54c3_8938_6795f4e67009
#define WINRT_GENERIC_6e7a2b4f_811c_54c3_8938_6795f4e67009
template <> struct __declspec(uuid("6e7a2b4f-811c-54c3-8938-6795f4e67009")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Services::Maps::MapRouteFinderResult> : impl_AsyncOperationCompletedHandler<Windows::Services::Maps::MapRouteFinderResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_88225b39_8be9_5c03_9714_8f1642d8a43f
#define WINRT_GENERIC_88225b39_8be9_5c03_9714_8f1642d8a43f
template <> struct __declspec(uuid("88225b39-8be9-5c03-9714-8f1642d8a43f")) __declspec(novtable) IIterator<Windows::Devices::Geolocation::Geopoint> : impl_IIterator<Windows::Devices::Geolocation::Geopoint> {};
#endif


}

namespace Windows::Services::Maps {

template <typename D>
struct WINRT_EBO impl_IMapAddress
{
    hstring BuildingName() const;
    hstring BuildingFloor() const;
    hstring BuildingRoom() const;
    hstring BuildingWing() const;
    hstring StreetNumber() const;
    hstring Street() const;
    hstring Neighborhood() const;
    hstring District() const;
    hstring Town() const;
    hstring Region() const;
    hstring RegionCode() const;
    hstring Country() const;
    hstring CountryCode() const;
    hstring PostCode() const;
    hstring Continent() const;
};

template <typename D>
struct WINRT_EBO impl_IMapAddress2
{
    hstring FormattedAddress() const;
};

template <typename D>
struct WINRT_EBO impl_IMapLocation
{
    Windows::Devices::Geolocation::Geopoint Point() const;
    hstring DisplayName() const;
    hstring Description() const;
    Windows::Services::Maps::MapAddress Address() const;
};

template <typename D>
struct WINRT_EBO impl_IMapLocationFinderResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapLocation> Locations() const;
    Windows::Services::Maps::MapLocationFinderStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IMapLocationFinderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAsync(hstring_ref searchText, const Windows::Devices::Geolocation::Geopoint & referencePoint, uint32_t maxCount) const;
};

template <typename D>
struct WINRT_EBO impl_IMapLocationFinderStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapLocationFinderResult> FindLocationsAtAsync(const Windows::Devices::Geolocation::Geopoint & queryPoint, Windows::Services::Maps::MapLocationDesiredAccuracy accuracy) const;
};

template <typename D>
struct WINRT_EBO impl_IMapManagerStatics
{
    void ShowDownloadedMapsUI() const;
    void ShowMapsUpdateUI() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRoute
{
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    double LengthInMeters() const;
    Windows::Foundation::TimeSpan EstimatedDuration() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteLeg> Legs() const;
    bool IsTrafficBased() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRoute2
{
    Windows::Services::Maps::MapRouteRestrictions ViolatedRestrictions() const;
    bool HasBlockedRoads() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteDrivingOptions
{
    uint32_t MaxAlternateRouteCount() const;
    void MaxAlternateRouteCount(uint32_t value) const;
    Windows::Foundation::IReference<double> InitialHeading() const;
    void InitialHeading(const Windows::Foundation::IReference<double> & value) const;
    Windows::Services::Maps::MapRouteOptimization RouteOptimization() const;
    void RouteOptimization(Windows::Services::Maps::MapRouteOptimization value) const;
    Windows::Services::Maps::MapRouteRestrictions RouteRestrictions() const;
    void RouteRestrictions(Windows::Services::Maps::MapRouteRestrictions value) const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteFinderResult
{
    Windows::Services::Maps::MapRoute Route() const;
    Windows::Services::Maps::MapRouteFinderStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteFinderResult2
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRoute> AlternateRoutes() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteFinderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints, Windows::Services::Maps::MapRouteOptimization optimization, Windows::Services::Maps::MapRouteRestrictions restrictions, double headingInDegrees) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetWalkingRouteFromWaypointsAsync(const Windows::Foundation::Collections::IIterable<Windows::Devices::Geolocation::Geopoint> & wayPoints) const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteFinderStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::MapRouteFinderResult> GetDrivingRouteAsync(const Windows::Devices::Geolocation::Geopoint & startPoint, const Windows::Devices::Geolocation::Geopoint & endPoint, const Windows::Services::Maps::MapRouteDrivingOptions & options) const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteLeg
{
    Windows::Devices::Geolocation::GeoboundingBox BoundingBox() const;
    Windows::Devices::Geolocation::Geopath Path() const;
    double LengthInMeters() const;
    Windows::Foundation::TimeSpan EstimatedDuration() const;
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::MapRouteManeuver> Maneuvers() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteManeuver
{
    Windows::Devices::Geolocation::Geopoint StartingPoint() const;
    double LengthInMeters() const;
    hstring InstructionText() const;
    Windows::Services::Maps::MapRouteManeuverKind Kind() const;
    hstring ExitNumber() const;
    Windows::Services::Maps::MapManeuverNotices ManeuverNotices() const;
};

template <typename D>
struct WINRT_EBO impl_IMapRouteManeuver2
{
    double StartHeading() const;
    double EndHeading() const;
    hstring StreetName() const;
};

template <typename D>
struct WINRT_EBO impl_IMapServiceStatics
{
    void ServiceToken(hstring_ref value) const;
    hstring ServiceToken() const;
};

template <typename D>
struct WINRT_EBO impl_IMapServiceStatics2
{
    hstring WorldViewRegionCode() const;
};

template <typename D>
struct WINRT_EBO impl_IMapServiceStatics3
{
    hstring DataAttributions() const;
};

struct IMapAddress :
    Windows::IInspectable,
    impl::consume<IMapAddress>
{
    IMapAddress(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapAddress>(m_ptr); }
};

struct IMapAddress2 :
    Windows::IInspectable,
    impl::consume<IMapAddress2>
{
    IMapAddress2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapAddress2>(m_ptr); }
};

struct IMapLocation :
    Windows::IInspectable,
    impl::consume<IMapLocation>
{
    IMapLocation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapLocation>(m_ptr); }
};

struct IMapLocationFinderResult :
    Windows::IInspectable,
    impl::consume<IMapLocationFinderResult>
{
    IMapLocationFinderResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapLocationFinderResult>(m_ptr); }
};

struct IMapLocationFinderStatics :
    Windows::IInspectable,
    impl::consume<IMapLocationFinderStatics>
{
    IMapLocationFinderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapLocationFinderStatics>(m_ptr); }
};

struct IMapLocationFinderStatics2 :
    Windows::IInspectable,
    impl::consume<IMapLocationFinderStatics2>
{
    IMapLocationFinderStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapLocationFinderStatics2>(m_ptr); }
};

struct IMapManagerStatics :
    Windows::IInspectable,
    impl::consume<IMapManagerStatics>
{
    IMapManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapManagerStatics>(m_ptr); }
};

struct IMapRoute :
    Windows::IInspectable,
    impl::consume<IMapRoute>
{
    IMapRoute(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRoute>(m_ptr); }
};

struct IMapRoute2 :
    Windows::IInspectable,
    impl::consume<IMapRoute2>
{
    IMapRoute2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRoute2>(m_ptr); }
};

struct IMapRouteDrivingOptions :
    Windows::IInspectable,
    impl::consume<IMapRouteDrivingOptions>
{
    IMapRouteDrivingOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteDrivingOptions>(m_ptr); }
};

struct IMapRouteFinderResult :
    Windows::IInspectable,
    impl::consume<IMapRouteFinderResult>
{
    IMapRouteFinderResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteFinderResult>(m_ptr); }
};

struct IMapRouteFinderResult2 :
    Windows::IInspectable,
    impl::consume<IMapRouteFinderResult2>
{
    IMapRouteFinderResult2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteFinderResult2>(m_ptr); }
};

struct IMapRouteFinderStatics :
    Windows::IInspectable,
    impl::consume<IMapRouteFinderStatics>
{
    IMapRouteFinderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteFinderStatics>(m_ptr); }
};

struct IMapRouteFinderStatics2 :
    Windows::IInspectable,
    impl::consume<IMapRouteFinderStatics2>
{
    IMapRouteFinderStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteFinderStatics2>(m_ptr); }
};

struct IMapRouteLeg :
    Windows::IInspectable,
    impl::consume<IMapRouteLeg>
{
    IMapRouteLeg(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteLeg>(m_ptr); }
};

struct IMapRouteManeuver :
    Windows::IInspectable,
    impl::consume<IMapRouteManeuver>
{
    IMapRouteManeuver(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteManeuver>(m_ptr); }
};

struct IMapRouteManeuver2 :
    Windows::IInspectable,
    impl::consume<IMapRouteManeuver2>
{
    IMapRouteManeuver2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapRouteManeuver2>(m_ptr); }
};

struct IMapServiceStatics :
    Windows::IInspectable,
    impl::consume<IMapServiceStatics>
{
    IMapServiceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapServiceStatics>(m_ptr); }
};

struct IMapServiceStatics2 :
    Windows::IInspectable,
    impl::consume<IMapServiceStatics2>
{
    IMapServiceStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapServiceStatics2>(m_ptr); }
};

struct IMapServiceStatics3 :
    Windows::IInspectable,
    impl::consume<IMapServiceStatics3>
{
    IMapServiceStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMapServiceStatics3>(m_ptr); }
};

}

}
