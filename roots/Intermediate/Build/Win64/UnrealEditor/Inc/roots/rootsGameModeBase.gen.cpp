// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "roots/rootsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderootsGameModeBase() {}
// Cross Module References
	ROOTS_API UClass* Z_Construct_UClass_ArootsGameModeBase_NoRegister();
	ROOTS_API UClass* Z_Construct_UClass_ArootsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_roots();
// End Cross Module References
	void ArootsGameModeBase::StaticRegisterNativesArootsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ArootsGameModeBase);
	UClass* Z_Construct_UClass_ArootsGameModeBase_NoRegister()
	{
		return ArootsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ArootsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ArootsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_roots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ArootsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "rootsGameModeBase.h" },
		{ "ModuleRelativePath", "rootsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ArootsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ArootsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ArootsGameModeBase_Statics::ClassParams = {
		&ArootsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ArootsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ArootsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ArootsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ArootsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ArootsGameModeBase.OuterSingleton, Z_Construct_UClass_ArootsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ArootsGameModeBase.OuterSingleton;
	}
	template<> ROOTS_API UClass* StaticClass<ArootsGameModeBase>()
	{
		return ArootsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ArootsGameModeBase);
	struct Z_CompiledInDeferFile_FID_roots_Source_roots_rootsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_roots_Source_roots_rootsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ArootsGameModeBase, ArootsGameModeBase::StaticClass, TEXT("ArootsGameModeBase"), &Z_Registration_Info_UClass_ArootsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ArootsGameModeBase), 717132363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_roots_Source_roots_rootsGameModeBase_h_1136175058(TEXT("/Script/roots"),
		Z_CompiledInDeferFile_FID_roots_Source_roots_rootsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_roots_Source_roots_rootsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
