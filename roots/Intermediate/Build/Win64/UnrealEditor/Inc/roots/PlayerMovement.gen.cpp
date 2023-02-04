// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "roots/PlayerMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovement() {}
// Cross Module References
	ROOTS_API UClass* Z_Construct_UClass_UPlayerMovement_NoRegister();
	ROOTS_API UClass* Z_Construct_UClass_UPlayerMovement();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_roots();
// End Cross Module References
	void UPlayerMovement::StaticRegisterNativesUPlayerMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovement);
	UClass* Z_Construct_UClass_UPlayerMovement_NoRegister()
	{
		return UPlayerMovement::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_roots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerMovement.h" },
		{ "ModuleRelativePath", "PlayerMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovement_Statics::ClassParams = {
		&UPlayerMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMovement()
	{
		if (!Z_Registration_Info_UClass_UPlayerMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMovement.OuterSingleton, Z_Construct_UClass_UPlayerMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMovement.OuterSingleton;
	}
	template<> ROOTS_API UClass* StaticClass<UPlayerMovement>()
	{
		return UPlayerMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovement);
	struct Z_CompiledInDeferFile_FID_roots_Source_roots_PlayerMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_roots_Source_roots_PlayerMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovement, UPlayerMovement::StaticClass, TEXT("UPlayerMovement"), &Z_Registration_Info_UClass_UPlayerMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovement), 4067622713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_roots_Source_roots_PlayerMovement_h_773833052(TEXT("/Script/roots"),
		Z_CompiledInDeferFile_FID_roots_Source_roots_PlayerMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_roots_Source_roots_PlayerMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
