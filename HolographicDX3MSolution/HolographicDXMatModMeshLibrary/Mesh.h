#pragma once
#include "pch.h"
#include <assimp\material.h>
#include <assimp\mesh.h>
#include "BufferContainer.h"


struct aiMesh;

using namespace Platform;
using namespace Platform::Collections;

namespace HolographicDXMatModMeshLibrary
{
	ref class ModelMaterial;

	ref class Mesh sealed
	{
		friend ref class Model;

	public:
//		~Mesh();

		property Model ^ CurrentModel
		{
			Model ^ get() { return mModel; }
		}

		property ModelMaterial ^ CurrentMaterial
		{
			ModelMaterial ^ get() { return mMaterial;  }
		}

		ModelMaterial ^ GetMaterial();
		property Platform::String ^ Name;

		property Vector<XMFLOAT3> ^ Vertices;
		property Vector<XMFLOAT3> ^ Normals;
		property Vector<XMFLOAT3> ^ Tangents;
		property Vector<XMFLOAT3> ^ BiNormals;
		property Vector<Vector<XMFLOAT3> ^> ^ TextureCoordinates;
		property Vector<Vector<XMFLOAT3> ^> ^ VertexColors;
		property Vector<UINT> ^ Indices;
		property UINT FaceCount;
		
		bool HasCachedVertexBuffer() ;
		bool HasCachedIndexBuffer() ;

		void CreateIndexBuffer(ID3D11Buffer** indexBuffer);
		void CreateCachedVertexAndIndexBuffers(ID3D11Device& device);


	private:
		Mesh( Model^ model, aiMesh mesh);
		Mesh^ operator=(const Mesh^ rhs);
		BufferContainer* VertexBuffer();
		BufferContainer* IndexBuffer();

		Model ^ mModel;
		ModelMaterial^ mMaterial;
		std::string mName;
		std::vector<XMFLOAT3> mVertices;
		std::vector<XMFLOAT3> mNormals;
		std::vector<XMFLOAT3> mTangents;
		std::vector<XMFLOAT3> mBiNormals;
		std::vector<std::vector<XMFLOAT3>*> mTextureCoordinates;
		std::vector<std::vector<XMFLOAT4>*> mVertexColors;
		UINT mFaceCount;
		std::vector<UINT> mIndices;

		BufferContainer* mVertexBuffer;
		BufferContainer* mIndexBuffer;
	};

}
