#pragma once

#include <collection.h>
#include <ppltasks.h>

#include <algorithm>
#include <windows.h>
#include <exception>
#include <cassert>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <memory>

#include <agile.h>
#include <array>
#include <d2d1_2.h>
#include <d3d11_4.h>
#include <DirectXColors.h>
#include <dwrite_2.h>
#include <map>
#include <mutex>
#include <wincodec.h>
#include <WindowsNumerics.h>

#include <d3d11_1.h>

#include <DirectXMath.h>
#include <DirectXPackedVector.h>

//#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

#define DeleteObject(object) if((object) != nullptr) { delete object; object = nullptr; }
#define DeleteObjects(objects) if((objects) != nullptr) { delete[] objects; objects = nullptr; }
#define ReleaseObject(object) if((object) != nullptr) { object->Release(); object = nullptr; }

namespace HolographicDXMatModMeshLibrary
{
	typedef unsigned char byte;
}

using namespace DirectX;
using namespace DirectX::PackedVector;
using namespace Windows::Foundation::Collections;
using namespace Platform::Collections;

using namespace D2D1;
using namespace Microsoft::WRL;
using namespace Windows::Graphics::DirectX::Direct3D11;
using namespace Windows::Graphics::Display;
using namespace Windows::Graphics::Holographic;
