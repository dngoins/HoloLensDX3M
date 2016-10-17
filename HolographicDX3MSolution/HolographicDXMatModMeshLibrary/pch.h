#pragma once

#include <collection.h>
#include <ppltasks.h>

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

namespace Library
{
	typedef unsigned char byte;
}

using namespace DirectX;
using namespace DirectX::PackedVector;