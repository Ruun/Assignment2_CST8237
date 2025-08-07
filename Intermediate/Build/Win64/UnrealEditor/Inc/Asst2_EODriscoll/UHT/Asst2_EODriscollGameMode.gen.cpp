// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/Asst2_EODriscollGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsst2_EODriscollGameMode() {}
// Cross Module References
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollGameMode();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	void AAsst2_EODriscollGameMode::StaticRegisterNativesAAsst2_EODriscollGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsst2_EODriscollGameMode);
	UClass* Z_Construct_UClass_AAsst2_EODriscollGameMode_NoRegister()
	{
		return AAsst2_EODriscollGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Asst2_EODriscollGameMode.h" },
		{ "ModuleRelativePath", "Asst2_EODriscollGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsst2_EODriscollGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::ClassParams = {
		&AAsst2_EODriscollGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAsst2_EODriscollGameMode()
	{
		if (!Z_Registration_Info_UClass_AAsst2_EODriscollGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsst2_EODriscollGameMode.OuterSingleton, Z_Construct_UClass_AAsst2_EODriscollGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsst2_EODriscollGameMode.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<AAsst2_EODriscollGameMode>()
	{
		return AAsst2_EODriscollGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsst2_EODriscollGameMode);
	AAsst2_EODriscollGameMode::~AAsst2_EODriscollGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsst2_EODriscollGameMode, AAsst2_EODriscollGameMode::StaticClass, TEXT("AAsst2_EODriscollGameMode"), &Z_Registration_Info_UClass_AAsst2_EODriscollGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsst2_EODriscollGameMode), 3350882965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollGameMode_h_1017708449(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
