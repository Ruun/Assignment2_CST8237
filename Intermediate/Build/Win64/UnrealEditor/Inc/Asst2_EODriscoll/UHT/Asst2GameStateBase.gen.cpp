// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/Asst2GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsst2GameStateBase() {}
// Cross Module References
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2GameStateBase();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2GameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	void AAsst2GameStateBase::StaticRegisterNativesAAsst2GameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsst2GameStateBase);
	UClass* Z_Construct_UClass_AAsst2GameStateBase_NoRegister()
	{
		return AAsst2GameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AAsst2GameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStarted_MetaData[];
#endif
		static void NewProp_GameStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GameStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsst2GameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2GameStateBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2GameStateBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Asst2GameStateBase.h" },
		{ "ModuleRelativePath", "Asst2GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted_MetaData[] = {
		{ "Category", "Asst2GameStateBase" },
		{ "ModuleRelativePath", "Asst2GameStateBase.h" },
	};
#endif
	void Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted_SetBit(void* Obj)
	{
		((AAsst2GameStateBase*)Obj)->GameStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted = { "GameStarted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAsst2GameStateBase), &Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted_MetaData), Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsst2GameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2GameStateBase_Statics::NewProp_GameStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsst2GameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsst2GameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsst2GameStateBase_Statics::ClassParams = {
		&AAsst2GameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAsst2GameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2GameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2GameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsst2GameStateBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2GameStateBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAsst2GameStateBase()
	{
		if (!Z_Registration_Info_UClass_AAsst2GameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsst2GameStateBase.OuterSingleton, Z_Construct_UClass_AAsst2GameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsst2GameStateBase.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<AAsst2GameStateBase>()
	{
		return AAsst2GameStateBase::StaticClass();
	}
	AAsst2GameStateBase::AAsst2GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsst2GameStateBase);
	AAsst2GameStateBase::~AAsst2GameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2GameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2GameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsst2GameStateBase, AAsst2GameStateBase::StaticClass, TEXT("AAsst2GameStateBase"), &Z_Registration_Info_UClass_AAsst2GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsst2GameStateBase), 1516214163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2GameStateBase_h_2829901701(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2GameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
