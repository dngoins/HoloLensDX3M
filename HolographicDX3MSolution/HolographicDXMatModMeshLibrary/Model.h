#pragma once

#include "pch.h"
#include "DeviceResources.h"
#include <windows.graphics.directx.direct3d11.interop.h>

using namespace D2D1;
using namespace Microsoft::WRL;
using namespace Windows::Graphics::DirectX::Direct3D11;
using namespace Windows::Graphics::Display;
using namespace Windows::Graphics::Holographic;



namespace HolographicDXMatModMeshLibrary
{

	ref class Model sealed
	{
		friend ref class Mesh;
		friend ref class ModelMaterial;

	public:
		Model(HolographicSpace^ holographicSpace, Platform::String ^ filename, bool flipUVs = false);
		//		~Model();

		property bool HasMeshes
		{
			bool get() { return ( mMeshes->Size > 0); }
		}

		property bool HasMaterials { bool get() { return (mMaterials->Size > 0); }
		}

		property bool HasAnimations;

		property IVector<Mesh^> ^ Meshes
		{
			IVector<Mesh^> ^ get() { return mMeshes; }
		}

		property IVector<ModelMaterial ^> ^ Materials
		{
			IVector<ModelMaterial^> ^ get() { return mMaterials; }
		}


		//const std::vector<Mesh^>& Meshes() ;
		//const std::vector<ModelMaterial^>& Materials() ;

	internal:
		std::shared_ptr<DX::DeviceResources> GetDeviceResources();

	private:
		Model(const Model^ rhs);
		Model^ operator=(const Model^ rhs);

		
		Vector<Mesh^>^ mMeshes;
		Vector<ModelMaterial^>^ mMaterials;
		std::shared_ptr<DX::DeviceResources> mDeviceResources;
		HolographicSpace ^ mHolographicSpace;

	};

}