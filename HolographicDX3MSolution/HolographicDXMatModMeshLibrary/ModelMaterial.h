#pragma once

#include "pch.h"
#include <material.h>

struct aiMaterial;

namespace HolographicDXMatModMeshLibrary
{
	public enum TextureType
	{
		TextureTypeDifffuse = 0,
		TextureTypeSpecularMap,
		TextureTypeAmbient,
		TextureTypeEmissive,
		TextureTypeHeightmap,
		TextureTypeNormalMap,
		TextureTypeSpecularPowerMap,
		TextureTypeDisplacementMap,
		TextureTypeLightMap,
		TextureTypeEnd
	};

	public ref class ModelMaterial sealed
	{
		friend ref class Model;

	public:
		ModelMaterial(Model^ model);
		virtual ~ModelMaterial();
		Model^ GetModel();
		
	
	private:
		static void InitializeTextureTypeMappings();
		static std::map<TextureType, UINT> sTextureTypeMappings;

		ModelMaterial(Model^ model, aiMaterial* material);
		ModelMaterial(const ModelMaterial^ rhs);
		ModelMaterial^ operator=(const ModelMaterial^ rhs);
		void ToWideString(const std::string& source, std::wstring& dest);
		std::wstring ToWideString(const std::string& source);
		
		const std::string& Name() const;
		const std::map<TextureType, std::vector<std::wstring>*>& Textures() const;

		Model^ mModel;
		std::string mName;
		std::map<TextureType, std::vector<std::wstring>*> mTextures;
	};

}