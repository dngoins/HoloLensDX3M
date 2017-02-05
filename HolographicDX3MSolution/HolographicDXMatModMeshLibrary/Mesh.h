#pragma once
#include "pch.h"
#include <material.h>
#include <mesh.h>
#include <WindowsNumerics.h>


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
				return ref new Platform::String(data.data());				
			}
			void set(String ^ _name)
			{				
				mname = std::string(_name->Begin(), _name->End());
			}
		}

		

		property Array<float3> ^ Vertices {   Array<float3> ^ get()
		{
			return ref new Array<float3>(mVertices.data, mVertices.size());
		}}

		property  Array<float3> ^ Normals
		{   Array<float3> ^ get() { return ref new Array<float3>(mNormals.data, mNormals.size()); }}

		property  Array<float3> ^ Tangents
		{   Array<float3> ^ get() { return ref new Array<float3>(mTangents.data, mTangents.size()); }}

		property  Array<float3> ^ BiNormals
		{   Array<float3> ^ get() { return ref new Array<float3>(mBiNormals.data, mBiNormals.size()); }}

		property  IVector<IVector<float3> ^> ^ TextureCoordinates
		{
			IVector<IVector<float3> ^ > ^ get()
			{
				Vector<Vector<float3> ^> ^ result = ref new Vector<Vector<float3> ^>();
				for (std::vector<float3> item : mTextureCoordinates)
				{
					result->Append(ref new Vector<float3>(begin(item), end(item)) );
				}
				return (IVector<IVector<float3> ^> ^)result;
			}
		}

		property IVector<IVector<float4> ^> ^ VertexColors
		{ 
			IVector<IVector<float4> ^> ^ get()
			{				
				Vector<Vector<float4> ^> ^ result = ref new Vector<Vector<float4> ^>();
				for (std::vector<float4>  item : mVertexColors)
				{
					result->Append(ref new Vector<float4>(begin(item), end(item)) );
				}
				return (IVector<IVector<float4> ^> ^)result;
			}
		}

		property Array<UINT> ^ Indices
		{  Array<UINT > ^ get() { return ref new Array<UINT>(mIndices.data, mIndices.size()); }}


		property UINT FaceCount
		{
			UINT get() { mFaceCount.Value;  }
		}
		property bool HasMeshes
		{
			bool get() { return (mMeshes.size() > 0); }
		}

		property bool HasMaterials { bool get() { return (mMaterials.size() > 0); }
		}

		property bool HasAnimations;

		property IVector<Mesh^> ^ Meshes
		{
			IVector<Mesh^> ^ get() { return ref new Vector<Mesh^> (begin(mMeshes), end(mMeshes)); }
		}

		property IVector<ModelMaterial ^> ^ Materials
		{
			IVector<ModelMaterial^> ^ get() { return ref new Vector<ModelMaterial^>( begin(mMaterials), end(mMaterials)); }
		}


		bool HasCachedVertexBuffer() ;
		bool HasCachedIndexBuffer() ;

	internal:
		void CreateIndexBuffer(ID3D11Buffer** indexBuffer);
	//	void CreateCachedVertexAndIndexBuffers(ID3D11Device& device);
		Mesh(Model^ model, aiMesh mesh);

	private:		
		/*	Mesh^ operator=(const Mesh^ rhs);
		BufferContainer* VertexBuffer();
		BufferContainer* IndexBuffer();*/

		Model ^ mModel;
		ModelMaterial^ mMaterial;
		
		std::string mname;
		std::vector<XMFLOAT3> mVertices;
		std::vector<XMFLOAT3> mNormals;
		std::vector<XMFLOAT3> mTangents;
		std::vector<XMFLOAT3> mBiNormals;
		std::vector<std::vector<float3>> mTextureCoordinates;
		std::vector<std::vector<float4>>  mVertexColors;
		UINT mFaceCount;
		std::vector<UINT> mIndices;

	/*	BufferContainer* mVertexBuffer;
		BufferContainer* mIndexBuffer;
*/
	internal:	
		std::vector<Mesh^> mMeshes;
		std::vector<ModelMaterial^> mMaterials;
	};

}
