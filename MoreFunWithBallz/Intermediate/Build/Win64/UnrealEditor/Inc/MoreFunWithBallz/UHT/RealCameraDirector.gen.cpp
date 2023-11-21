// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoreFunWithBallz/Public/RealCameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealCameraDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_ARealCameraDirector();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_ARealCameraDirector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoreFunWithBallz();
// End Cross Module References
	void ARealCameraDirector::StaticRegisterNativesARealCameraDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealCameraDirector);
	UClass* Z_Construct_UClass_ARealCameraDirector_NoRegister()
	{
		return ARealCameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ARealCameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealCameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoreFunWithBallz,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealCameraDirector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealCameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealCameraDirector.h" },
		{ "ModuleRelativePath", "Public/RealCameraDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealCameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealCameraDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealCameraDirector_Statics::ClassParams = {
		&ARealCameraDirector::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealCameraDirector_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARealCameraDirector()
	{
		if (!Z_Registration_Info_UClass_ARealCameraDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealCameraDirector.OuterSingleton, Z_Construct_UClass_ARealCameraDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealCameraDirector.OuterSingleton;
	}
	template<> MOREFUNWITHBALLZ_API UClass* StaticClass<ARealCameraDirector>()
	{
		return ARealCameraDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealCameraDirector);
	ARealCameraDirector::~ARealCameraDirector() {}
	struct Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealCameraDirector, ARealCameraDirector::StaticClass, TEXT("ARealCameraDirector"), &Z_Registration_Info_UClass_ARealCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealCameraDirector), 1072270541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector_h_2142225034(TEXT("/Script/MoreFunWithBallz"),
		Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_RealCameraDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
