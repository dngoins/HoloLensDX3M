#include "pch.h"
#include "Mesh.h"

#include "Model.h"
#include <assimp\material.h>

#include <assimp/scene.h>

using namespace HolographicDXMatModMeshLibrary;
using namespace Platform;


namespace HolographicDXMatModMeshLibrary
{
	

	Mesh::Mesh ( Model^ model, aiMesh mesh)
		:mModel(model),  mName(mesh.mName.C_Str()), mVertices(), mNormals(), mTangents(), mBiNormals(), mTextureCoordinates(), mVertexColors(),
		mFaceCount(0), mIndices(), mVertexBuffer(), mIndexBuffer()
	{		
		//mMaterial = mModel->Cu
		mMaterial = mModel->Materials().at(mesh.mMaterialIndex);

		// Vertices
		mVertices.reserve(mesh.mNumVertices);
		for (UINT i = 0; i < mesh.mNumVertices; i++)
		{
			mVertices.push_back(XMFLOAT3(reinterpret_cast<const float*>(&mesh.mVertices[i])));
		}

		// Normals
		if (mesh.HasNormals())
		{
			mNormals.reserve(mesh.mNumVertices);
			for (UINT i = 0; i < mesh.mNumVertices; i++)
			{
				mNormals.push_back(XMFLOAT3(reinterpret_cast<const float*>(&mesh.mNormals[i])));
			}
		}

		// Tangents and Binormals
		if (mesh.HasTangentsAndBitangents())
		{
			mTangents.reserve(mesh.mNumVertices);
			mBiNormals.reserve(mesh.mNumVertices);
			for (UINT i = 0; i < mesh.mNumVertices; i++)
			{
				mTangents.push_back(XMFLOAT3(reinterpret_cast<const float*>(&mesh.mTangents[i])));
				mBiNormals.push_back(XMFLOAT3(reinterpret_cast<const float*>(&mesh.mBitangents[i])));
			}
		}

		// Texture Coordinates
		UINT uvChannelCount = mesh.GetNumUVChannels();
		for (UINT i = 0; i < uvChannelCount; i++)
		{
			std::vector<XMFLOAT3>* textureCoordinates = new std::vector<XMFLOAT3>();
			textureCoordinates->reserve(mesh.mNumVertices);
			mTextureCoordinates.push_back(textureCoordinates);

			aiVector3D* aiTextureCoordinates = mesh.mTextureCoords[i];
			for (UINT j = 0; j < mesh.mNumVertices; j++)
			{
				textureCoordinates->push_back(XMFLOAT3(reinterpret_cast<const float*>(&aiTextureCoordinates[j])));
			}
		}

		// Vertex Colors
		UINT colorChannelCount = mesh.GetNumColorChannels();
		for (UINT i = 0; i < colorChannelCount; i++)
		{
			std::vector<XMFLOAT4>* vertexColors = new std::vector<XMFLOAT4>();
			vertexColors->reserve(mesh.mNumVertices);
			mVertexColors.push_back(vertexColors);

			aiColor4D* aiVertexColors = mesh.mColors[i];
			for (UINT j = 0; j < mesh.mNumVertices; j++)
			{
				vertexColors->push_back(XMFLOAT4(reinterpret_cast<const float*>(&aiVertexColors[j])));
			}
		}

		// Faces (note: could pre-reserve if we limit primitive types)
		if (mesh.HasFaces())
		{
			mFaceCount = mesh.mNumFaces;
			for (UINT i = 0; i < mFaceCount; i++)
			{
				aiFace* face = &mesh.mFaces[i];

				for (UINT j = 0; j < face->mNumIndices; j++)
				{
					mIndices.push_back(face->mIndices[j]);
				}
			}
		}
	}

	/*Mesh::~Mesh()
	{
		for (std::vector<XMFLOAT3>* textureCoordinates : mTextureCoordinates)
		{
			delete textureCoordinates;
		}

		for (std::vector<XMFLOAT4>* vertexColors : mVertexColors)
		{
			delete vertexColors;
		}

		mVertexBuffer->ReleaseBuffer();
		mIndexBuffer->ReleaseBuffer();
	}*/
	
	BufferContainer* Mesh::VertexBuffer()
	{
		return mVertexBuffer;
	}

	BufferContainer* Mesh::IndexBuffer()
	{
		return mIndexBuffer;
	}

	bool Mesh::HasCachedVertexBuffer() 
	{
		Mesh^ mesh = const_cast<Mesh^>(this);

		return mesh->mVertexBuffer->HasBuffer();
	}

	bool Mesh::HasCachedIndexBuffer() 
	{
		Mesh^ mesh = const_cast<Mesh^>(this);

		return mesh->mIndexBuffer->HasBuffer();
	}

	void Mesh::CreateIndexBuffer(ID3D11Buffer** indexBuffer)
	{
		assert(indexBuffer != nullptr);

		D3D11_BUFFER_DESC indexBufferDesc;
		ZeroMemory(&indexBufferDesc, sizeof(indexBufferDesc));
		indexBufferDesc.ByteWidth = sizeof(UINT) * mIndices.size();
		indexBufferDesc.Usage = D3D11_USAGE_IMMUTABLE;
		indexBufferDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D11_SUBRESOURCE_DATA indexSubResourceData;
		ZeroMemory(&indexSubResourceData, sizeof(indexSubResourceData));
		indexSubResourceData.pSysMem = &mIndices[0];
		if (FAILED(mModel->GetDeviceResources->GetDirect3DDevice()->CreateBuffer(&indexBufferDesc, &indexSubResourceData, indexBuffer)))
		{
			//throw GameException("ID3D11Device::CreateBuffer() failed.");
			OutputDebugString(L"ID3D11Device::CreateBuffer() failed in Mesh::CreateIndexBuffer");
		}
	}

	void Mesh::CreateCachedVertexAndIndexBuffers(ID3D11Device& device) //, const Material& material)
	{
		mVertexBuffer->ReleaseBuffer();
		mIndexBuffer->ReleaseBuffer();

		ID3D11Buffer* buffer = nullptr;
		//material.CreateVertexBuffer(&device, *this, &buffer);
		mVertexBuffer->SetBuffer(buffer);
		mVertexBuffer->SetElementCount(mVertices.size());

		buffer = nullptr;
		CreateIndexBuffer(&buffer);
		mIndexBuffer->SetBuffer(buffer);
		mIndexBuffer->SetElementCount(mIndices.size());
	}
}