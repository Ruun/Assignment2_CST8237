// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_UPlayerHUD();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_UPlayerHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHUD::execSetHealthProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SetHealthProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUD::execSetGameOverText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->SetGameOverText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUD::execSetWeaponAmmoCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->SetWeaponAmmoCount();
		P_NATIVE_END;
	}
	void UPlayerHUD::StaticRegisterNativesUPlayerHUD()
	{
		UClass* Class = UPlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGameOverText", &UPlayerHUD::execSetGameOverText },
			{ "SetHealthProgress", &UPlayerHUD::execSetHealthProgress },
			{ "SetWeaponAmmoCount", &UPlayerHUD::execSetWeaponAmmoCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics
	{
		struct PlayerHUD_eventSetGameOverText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetGameOverText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetGameOverText", nullptr, nullptr, Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PlayerHUD_eventSetGameOverText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::PlayerHUD_eventSetGameOverText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerHUD_SetGameOverText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetGameOverText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics
	{
		struct PlayerHUD_eventSetHealthProgress_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetHealthProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetHealthProgress", nullptr, nullptr, Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PlayerHUD_eventSetHealthProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::PlayerHUD_eventSetHealthProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerHUD_SetHealthProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetHealthProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics
	{
		struct PlayerHUD_eventSetWeaponAmmoCount_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHUD_eventSetWeaponAmmoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUD, nullptr, "SetWeaponAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PlayerHUD_eventSetWeaponAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::PlayerHUD_eventSetWeaponAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUD);
	UClass* Z_Construct_UClass_UPlayerHUD_NoRegister()
	{
		return UPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAmmoCountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAmmoCountText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUD_SetGameOverText, "SetGameOverText" }, // 2531591782
		{ &Z_Construct_UFunction_UPlayerHUD_SetHealthProgress, "SetHealthProgress" }, // 503566370
		{ &Z_Construct_UFunction_UPlayerHUD_SetWeaponAmmoCount, "SetWeaponAmmoCount" }, // 1354365042
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerHUD.h" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::NewProp_WeaponAmmoCountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_WeaponAmmoCountText = { "WeaponAmmoCountText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, WeaponAmmoCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_WeaponAmmoCountText_MetaData), Z_Construct_UClass_UPlayerHUD_Statics::NewProp_WeaponAmmoCountText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUD_Statics::NewProp_GameOverText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUD_Statics::NewProp_GameOverText = { "GameOverText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUD, GameOverText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::NewProp_GameOverText_MetaData), Z_Construct_UClass_UPlayerHUD_Statics::NewProp_GameOverText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_WeaponAmmoCountText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUD_Statics::NewProp_GameOverText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUD_Statics::ClassParams = {
		&UPlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerHUD()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton, Z_Construct_UClass_UPlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUD.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<UPlayerHUD>()
	{
		return UPlayerHUD::StaticClass();
	}
	UPlayerHUD::UPlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUD);
	UPlayerHUD::~UPlayerHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUD, UPlayerHUD::StaticClass, TEXT("UPlayerHUD"), &Z_Registration_Info_UClass_UPlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUD), 1534769626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_PlayerHUD_h_4046378716(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
