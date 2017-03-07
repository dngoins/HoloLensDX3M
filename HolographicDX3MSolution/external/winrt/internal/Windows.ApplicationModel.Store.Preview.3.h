// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Store.Preview.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Store::Preview {

struct StoreConfiguration
{
    StoreConfiguration() = delete;
    static void SetSystemConfiguration(hstring_ref catalogHardwareManufacturerId, hstring_ref catalogStoreContentModifierId, const Windows::Foundation::DateTime & systemConfigurationExpiration, hstring_ref catalogHardwareDescriptor);
    static void SetMobileOperatorConfiguration(hstring_ref mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes);
    static void SetStoreWebAccountId(hstring_ref webAccountId);
    static bool IsStoreWebAccountId(hstring_ref webAccountId);
    static Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo HardwareManufacturerInfo();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>> FilterUnsupportedSystemFeaturesAsync(const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> & systemFeatures);
    static Windows::Foundation::IReference<uint32_t> PurchasePromptingPolicy();
    static void PurchasePromptingPolicy(const Windows::Foundation::IReference<uint32_t> & value);
    static bool HasStoreWebAccount();
    static bool HasStoreWebAccountForUser(const Windows::System::User & user);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> GetStoreLogDataAsync(Windows::ApplicationModel::Store::Preview::StoreLogOptions options);
    static void SetStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId);
    static bool IsStoreWebAccountIdForUser(const Windows::System::User & user, hstring_ref webAccountId);
    static Windows::Foundation::IReference<uint32_t> GetPurchasePromptingPolicyForUser(const Windows::System::User & user);
    static void SetPurchasePromptingPolicyForUser(const Windows::System::User & user, const Windows::Foundation::IReference<uint32_t> & value);
};

struct WINRT_EBO StoreHardwareManufacturerInfo :
    Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo
{
    StoreHardwareManufacturerInfo(std::nullptr_t) noexcept {}
};

struct StorePreview
{
    StorePreview() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults> RequestProductPurchaseByProductIdAndSkuIdAsync(hstring_ref productId, hstring_ref skuId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>> LoadAddOnProductInfosAsync();
};

struct WINRT_EBO StorePreviewProductInfo :
    Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo
{
    StorePreviewProductInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePreviewPurchaseResults :
    Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults
{
    StorePreviewPurchaseResults(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorePreviewSkuInfo :
    Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo
{
    StorePreviewSkuInfo(std::nullptr_t) noexcept {}
};

}

}
