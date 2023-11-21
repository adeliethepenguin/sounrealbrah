// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoreFunWithBallz/Public/MyActorYA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorYA() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_AMyActorYA();
	MOREFUNWITHBALLZ_API UClass* Z_Construct_UClass_AMyActorYA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MoreFunWithBallz();
// End Cross Module References
	void AMyActorYA::StaticRegisterNativesAMyActorYA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorYA);
	UClass* Z_Construct_UClass_AMyActorYA_NoRegister()
	{
		return AMyActorYA::StaticClass();
	}
	struct Z_Construct_UClass_AMyActorYA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActorYA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MoreFunWithBallz,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorYA_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActorYA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorYA.h" },
		{ "ModuleRelativePath", "Public/MyActorYA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActorYA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorYA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorYA_Statics::ClassParams = {
		&AMyActorYA::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorYA_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorYA_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyActorYA()
	{
		if (!Z_Registration_Info_UClass_AMyActorYA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorYA.OuterSingleton, Z_Construct_UClass_AMyActorYA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActorYA.OuterSingleton;
	}
	template<> MOREFUNWITHBALLZ_API UClass* StaticClass<AMyActorYA>()
	{
		return AMyActorYA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorYA);
	AMyActorYA::~AMyActorYA() {}
	struct Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_MyActorYA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_MyActorYA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorYA, AMyActorYA::StaticClass, TEXT("AMyActorYA"), &Z_Registration_Info_UClass_AMyActorYA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorYA), 1855889526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_MyActorYA_h_1870854297(TEXT("/Script/MoreFunWithBallz"),
		Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_MyActorYA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__more__Projects_sounrealbrah_MoreFunWithBallz_Source_MoreFunWithBallz_Public_MyActorYA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
