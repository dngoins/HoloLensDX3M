// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.UserDataAccounts.SystemAccess.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct WINRT_EBO DeviceAccountConfiguration :
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration,
    impl::require<DeviceAccountConfiguration, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
{
    DeviceAccountConfiguration(std::nullptr_t) noexcept {}
    DeviceAccountConfiguration();
};

struct UserDataAccountSystemAccessManager
{
    UserDataAccountSystemAccessManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> AddAndShowDeviceAccountsAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> & accounts);
    static Windows::Foundation::IAsyncAction SuppressLocalAccountWithAccountAsync(hstring_ref userDataAccountId);
    static Windows::Foundation::IAsyncOperation<hstring> CreateDeviceAccountAsync(const Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration & account);
    static Windows::Foundation::IAsyncAction DeleteDeviceAccountAsync(hstring_ref accountId);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> GetDeviceAccountConfigurationAsync(hstring_ref accountId);
};

}

}
