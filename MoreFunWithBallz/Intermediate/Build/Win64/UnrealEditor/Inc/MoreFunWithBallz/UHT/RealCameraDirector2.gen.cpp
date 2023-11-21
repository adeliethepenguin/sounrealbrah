// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoreFunWithBallz/Public/RealCameraDirector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealCameraDirector2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_ARealCameraDirector2();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_ARealCameraDirector2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoreFunWithBallz();
// End Cross Module References
	void ARealCameraDirector2::StaticRegisterNativesARealCameraDirector2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealCameraDirector2);
	UClass* Z_Construct_UClass_ARealCameraDirector2_NoRegister()
	{
		return ARealCameraDirector2::StaticClass();
	}
	struct Z_Construct_UClass_ARealCameraDirector2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealCameraDirector2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoreFunWithBallz,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealCameraDirector2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealCameraDirector2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealCameraDirector2.h" },
		{ "ModuleRelativePath", "Public/RealCameraDirector2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealCameraDirector2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealCameraDirector2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealCameraDirector2_Statics::ClassParams = {
		&ARealCameraDirector2::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealCameraDirector2_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealCameraDirector2_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARealCameraDirector2()
	{
		if (!Z_Registration_Info_UClass_ARealCameraDirector2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealCameraDirector2.OuterSingleton, Z_Construct_UClass_ARealCameraDirector2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealCameraDirector2.OuterSingleton;
	}
	template<> MOREFUNWITHBALLZ_API UClass* StaticClass<ARealCameraDirector2>()
	{
		return ARealCameraDirector2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealCameraDirector2);
	ARealCameraDirector2::~ARealCameraDirector2() {}
	struct Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealCameraDirector2, ARealCameraDirector2::StaticClass, TEXT("ARealCameraDirector2"), &Z_Registration_Info_UClass_ARealCameraDirector2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealCameraDirector2), 3899643313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector2_h_2222027284(TEXT("/Script/MoreFunWithBallz"),
		Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
