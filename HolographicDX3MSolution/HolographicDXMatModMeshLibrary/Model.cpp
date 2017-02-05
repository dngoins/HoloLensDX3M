#include "Model.h"

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

namespace HolographicDXMatModMeshLibrary
{	
	Model::Model( const Array<byte>^ fileData, bool flipUVs)		
	{
	
		Assimp::Importer importer;

		UINT flags = aiProcess_Triangulate | aiProcess_JoinIdenticalVertices | aiProcess_SortByPType | aiProcess_FlipWindingOrder;
		if (flipUVs)
		{
			flags |= aiProcess_FlipUVs;
		}
		
		std::vector<byte> bFileData = std::vector<byte>();
		size_t pLength = fileData->Length;
		bFileData.reserve(pLength );

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
					mMaterials.push_back(ref new ModelMaterial(this, scene->mMaterials[i]));
				}
			}

			if (scene->HasMeshes())
			{
				for (UINT i = 0; i < scene->mNumMeshes; i++)
				{
					aiMesh  _aimesh = *(scene->mMeshes[i]);

					Mesh^ mesh = ref new Mesh(this, _aimesh);
					mMeshes.push_back(mesh);
				}
			}
	

		
	}
	
	Model::~Model()
	{
		mMeshes.clear();
		//mMeshes->Dispose();
		//mMeshes = nullptr;

		mMaterials.clear();
		//mMaterials->Dispose();
		//mMaterials = nullptr;		
	}




}