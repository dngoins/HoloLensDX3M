#include "pch.h"
#include "Model.h"

#include "Mesh.h"
#include "ModelMaterial.h"

#include "MatrixHelper.h"

#include <Importer.hpp>
#include <scene.h>
#include <postprocess.h>
#include <windows.graphics.directx.direct3d11.interop.h>
#include <collection.h>
#include <algorithm>


using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

namespace HolographicDXMatModMeshLibrary
{	
	Model::Model(HolographicSpace ^ holographicSpace, Vector<byte>^ fileData,  size_t pLength, bool flipUVs)
		: mHolographicSpace(holographicSpace)
	{
		mMeshes = ref new Vector<Mesh^>();
		mMaterials = ref new Vector<ModelMaterial^>();

		mDeviceResources = std::make_shared<DX::DeviceResources>();
		mDeviceResources->SetHolographicSpace(mHolographicSpace);

		Assimp::Importer importer;

		UINT flags = aiProcess_Triangulate | aiProcess_JoinIdenticalVertices | aiProcess_SortByPType | aiProcess_FlipWindingOrder;
		if (flipUVs)
		{
			flags |= aiProcess_FlipUVs;
		}
		
		std::vector<byte> bFileData = std::vector<byte>();
		bFileData.reserve(fileData->Size);

		std::for_each(begin(fileData), end(fileData), [&](byte val)
		{
			bFileData.push_back(val);
		});

			const void* pBuffer = LPVOID(&bFileData[0]);
			const aiScene* scene = importer.ReadFileFromMemory(pBuffer, pLength, 0);
			if (scene == nullptr)
			{
				OutputDebugStringA(importer.GetErrorString());
				OutputDebugString(L"\n");
			}

			if (scene->HasMaterials())
			{
				for (UINT i = 0; i < scene->mNumMaterials; i++)
				{
					mMaterials->Append(ref new ModelMaterial(this, scene->mMaterials[i]));
				}
			}

			if (scene->HasMeshes())
			{
				for (UINT i = 0; i < scene->mNumMeshes; i++)
				{
					aiMesh  _aimesh = *(scene->mMeshes[i]);

					Mesh^ mesh = ref new Mesh(this, _aimesh);
					mMeshes->Append(mesh);
				}
			}
	

		
	}


	std::shared_ptr<DX::DeviceResources> Model::GetDeviceResources()
	{
		return mDeviceResources;
	}

	Model::~Model()
	{
		mMeshes->Clear();
		mMeshes->Dispose();
		mMeshes = nullptr;

		mMaterials->Clear();
		mMaterials->Dispose();
		mMaterials = nullptr;		
	}




}