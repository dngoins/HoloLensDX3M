#pragma once
#include "pch.h"
#include <material.h>
#include <mesh.h>
#include <WindowsNumerics.h>
#include "BufferContainer.h"


struct aiMesh;

using namespace Platform;
using namespace Platform::Collections;
using namespace Windows::Foundation::Numerics;

namespace HolographicDXMatModMeshLibrary
{
	ref class ModelMaterial;

	public ref class Mesh sealed
	{
		friend ref class Model;

	public:
		virtual ~Mesh();

		property Model ^ CurrentModel
		{
			Model ^ get() { return mModel; }
		}

		property ModelMaterial ^ CurrentMaterial
		{
			ModelMaterial ^ get() { return mMaterial;  }
		}

		property String ^ Name
		{
			String ^ get()
			{
				auto data = std::wstring(mname.begin(), mname.end());
				m_Name = ref new Platform::String(data.data());
				return m_Name;
			}
			void set(String ^ _name)
			{
				m_Name = _name;
				mname = std::string(m_Name->Begin(), m_Name->End());
			}
		}

		

		property IVector<float3> ^ Vertices {   IVector<float3> ^ get()
		{
			return ref new Vector<float3>(mVertices.begin(), mVertices.end());
		}}

		property  IVector<float3> ^ Normals
		{   IVector<float3> ^ get() { return ref new Vector<float3>(mNormals.begin(), mNormals.end()); }}

		property  IVector<float3> ^ Tangents
		{   IVector<float3> ^ get() { return ref new Vector<float3>(mTangents.begin(), mTangents.end()); }}

		property  IVector<float3> ^ BiNormals
		{   IVector<float3> ^ get() { return ref new Vector<float3>(mBiNormals.begin(), mBiNormals.end()); }}

		property  IVector<Vector<float3> ^> ^ TextureCoordinates
		{
			IVector<Vector<float3>^> ^ get(){ return mTextureCoordinates ;}
		}

		property IVector<Vector<float4> ^> ^ VertexColors
		{ 
			IVector<Vector<float4> ^> ^ get() { return mVertexColors; }
		}

		property IVector<UINT> ^ Indices
		{  IVector<UINT > ^ get() { return ref new Vector<UINT>(mIndices.begin(), mIndices.end()); }}


		property UINT FaceCount
		{
			UINT get() { mFaceCount.Value;  }
		}
		property bool HasMeshes
		{
			bool get() { return (mMeshes->Size > 0); }
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
		String ^ m_Name;
		std::string mname;
		std::vector<XMFLOAT3> mVertices;
		std::vector<XMFLOAT3> mNormals;
		std::vector<XMFLOAT3> mTangents;
		std::vector<XMFLOAT3> mBiNormals;
		Vector<Vector<float3>^> ^ mTextureCoordinates;
		Vector<Vector<float4>^> ^ mVertexColors;
		UINT mFaceCount;
		std::vector<UINT> mIndices;

		BufferContainer* mVertexBuffer;
		BufferContainer* mIndexBuffer;

	internal:
	//	bool HasAnimations() const;

		Vector<Mesh^>^ mMeshes;
		Vector<ModelMaterial^>^ mMaterials;
	};

}
