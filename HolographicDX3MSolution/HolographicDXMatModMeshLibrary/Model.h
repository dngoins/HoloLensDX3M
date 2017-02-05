#pragma once

#include "pch.h"
#include "Mesh.h"
#include "ModelMaterial.h"

//#include "MatrixHelper.h"

#include <Importer.hpp>
#include <scene.h>
#include <postprocess.h>

//#include <windows.graphics.directx.direct3d11.interop.h>

using namespace D2D1;
using namespace Windows::Graphics::DirectX::Direct3D11;

namespace HolographicDXMatModMeshLibrary
{

	public ref class Model sealed
	{
		friend ref class Mesh;
		friend ref class ModelMaterial;

	public:		
		Model(const Array<byte>^ fileData, bool flipUVs);

		virtual ~Model();

		property bool HasMeshes
		{
			bool get() { return ( mMeshes.size() > 0); }
		}

		property bool HasMaterials { bool get() { return (mMaterials.size() > 0); }
		}

		property bool HasAnimations;

		property IVector<Mesh^> ^ Meshes
		{
			IVector<Mesh^> ^ get() { return (IVector<Mesh ^> ^)(ref new Vector<Mesh ^>(begin(mMeshes), end(mMeshes))); }
		}

		property IVector<ModelMaterial ^> ^ Materials
		{
			IVector<ModelMaterial^> ^ get() { return (IVector<ModelMaterial ^> ^)ref new Vector<ModelMaterial ^>(begin( mMaterials), end(mMaterials) ) ; }
		}

	
	private:
		Model(const Model^ rhs);
		std::vector<Mesh^> mMeshes;
		std::vector<ModelMaterial^> mMaterials;
	
	};

}