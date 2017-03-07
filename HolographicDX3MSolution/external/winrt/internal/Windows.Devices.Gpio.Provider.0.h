// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Gpio::Provider {

struct IGpioControllerProvider;
struct IGpioPinProvider;
struct IGpioPinProviderValueChangedEventArgs;
struct IGpioPinProviderValueChangedEventArgsFactory;
struct IGpioProvider;
struct GpioPinProviderValueChangedEventArgs;

}

namespace Windows::Devices::Gpio::Provider {

struct IGpioControllerProvider;
struct IGpioPinProvider;
struct IGpioPinProviderValueChangedEventArgs;
struct IGpioPinProviderValueChangedEventArgsFactory;
struct IGpioProvider;
struct GpioPinProviderValueChangedEventArgs;

}

namespace Windows::Devices::Gpio::Provider {

enum class ProviderGpioPinDriveMode
{
    Input = 0,
    Output = 1,
    InputPullUp = 2,
    InputPullDown = 3,
    OutputOpenDrain = 4,
    OutputOpenDrainPullUp = 5,
    OutputOpenSource = 6,
    OutputOpenSourcePullDown = 7,
};

enum class ProviderGpioPinEdge
{
    FallingEdge = 0,
    RisingEdge = 1,
};

enum class ProviderGpioPinValue
{
    Low = 0,
    High = 1,
};

enum class ProviderGpioSharingMode
{
    Exclusive = 0,
    SharedReadOnly = 1,
};

}

}
