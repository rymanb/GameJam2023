// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderoots_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_roots;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_roots()
	{
		if (!Z_Registration_Info_UPackage__Script_roots.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/roots",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x58A20F4A,
				0x4D87989C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_roots.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_roots.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_roots(Z_Construct_UPackage__Script_roots, TEXT("/Script/roots"), Z_Registration_Info_UPackage__Script_roots, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58A20F4A, 0x4D87989C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
