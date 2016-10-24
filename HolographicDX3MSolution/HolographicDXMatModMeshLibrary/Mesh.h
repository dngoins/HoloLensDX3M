#pragma once
#include "pch.h"
#include <assimp\material.h>
#include <assimp\mesh.h>
#include <WindowsNumerics.h>
#include "BufferContainer.h"


struct aiMesh;

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Numerics;

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

		property Vector<float3> ^ Vertices {  Vector<float3 > ^ get() { return ref new Vector<float3>(); }}
		property Vector<float3> ^ Normals
		{  Vector<float3 > ^ get() { return ref new Vector<float3>(); }}

		property Vector<float3> ^ Tangents
		{  Vector<float3 > ^ get() { return ref new Vector<float3>(); }}

		property Vector<float3> ^ BiNormals
		{  Vector<float3 > ^ get() { return ref new Vector<float3>(); }}

		property Vector<Vector<float3> ^> ^ TextureCoordinates
		{  Vector<Vector<float3> ^> ^ get() { return ref new Vector<Vector<float3> ^>(); }}

		property Vector<Vector<float3> ^> ^ VertexColors
		{ Vector<Vector<float3> ^> ^ get() { return ref new Vector<Vector<float3>^>(); }}

		property Vector<UINT> ^ Indices
		{  Vector<UINT > ^ get() { return ref new Vector<UINT>(); }}

		property UINT FaceCount
		{
			UINT get() { return 0;  }
		}
		
		bool HasCachedVertexBuffer() ;
		bool HasCachedIndexBuffer() ;

	internal:
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

	internal:
		bool HasMeshes() const;
		bool HasMaterials() const;
		bool HasAnimations() const;

		const std::vector<Mesh*>& Meshes() const;
		const std::vector<ModelMaterial*>& Materials() const;	
		std::vector<Mesh*> mMeshes;
		std::vector<ModelMaterial*> mMaterials;
	};

}
