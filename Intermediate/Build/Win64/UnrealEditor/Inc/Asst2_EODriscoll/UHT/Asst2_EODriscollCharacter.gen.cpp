// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/Asst2_EODriscollCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsst2_EODriscollCharacter() {}
// Cross Module References
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollCharacter();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	DEFINE_FUNCTION(AAsst2_EODriscollCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAsst2_EODriscollCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	void AAsst2_EODriscollCharacter::StaticRegisterNativesAAsst2_EODriscollCharacter()
	{
		UClass* Class = AAsst2_EODriscollCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasRifle", &AAsst2_EODriscollCharacter::execGetHasRifle },
			{ "SetHasRifle", &AAsst2_EODriscollCharacter::execSetHasRifle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics
	{
		struct Asst2_EODriscollCharacter_eventGetHasRifle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Asst2_EODriscollCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Asst2_EODriscollCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for the bool */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsst2_EODriscollCharacter, nullptr, "GetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::Asst2_EODriscollCharacter_eventGetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::Asst2_EODriscollCharacter_eventGetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics
	{
		struct Asst2_EODriscollCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((Asst2_EODriscollCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Asst2_EODriscollCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter to set the bool */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter to set the bool" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsst2_EODriscollCharacter, nullptr, "SetHasRifle", nullptr, nullptr, Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::Asst2_EODriscollCharacter_eventSetHasRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::Asst2_EODriscollCharacter_eventSetHasRifle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsst2_EODriscollCharacter);
	UClass* Z_Construct_UClass_AAsst2_EODriscollCharacter_NoRegister()
	{
		return AAsst2_EODriscollCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsst2_EODriscollCharacter_GetHasRifle, "GetHasRifle" }, // 737187913
		{ &Z_Construct_UFunction_AAsst2_EODriscollCharacter_SetHasRifle, "SetHasRifle" }, // 249868287
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Asst2_EODriscollCharacter.h" },
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool for AnimBP to switch to another animation set */" },
#endif
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool for AnimBP to switch to another animation set" },
#endif
	};
#endif
	void Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((AAsst2_EODriscollCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAsst2_EODriscollCharacter), &Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Asst2_EODriscollCharacter" },
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MaximumHealth_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MaximumHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Asst2_EODriscollCharacter" },
		{ "ModuleRelativePath", "Asst2_EODriscollCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollCharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_CurrentHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_bHasRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_MaximumHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsst2_EODriscollCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::ClassParams = {
		&AAsst2_EODriscollCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAsst2_EODriscollCharacter()
	{
		if (!Z_Registration_Info_UClass_AAsst2_EODriscollCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsst2_EODriscollCharacter.OuterSingleton, Z_Construct_UClass_AAsst2_EODriscollCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsst2_EODriscollCharacter.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<AAsst2_EODriscollCharacter>()
	{
		return AAsst2_EODriscollCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsst2_EODriscollCharacter);
	AAsst2_EODriscollCharacter::~AAsst2_EODriscollCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsst2_EODriscollCharacter, AAsst2_EODriscollCharacter::StaticClass, TEXT("AAsst2_EODriscollCharacter"), &Z_Registration_Info_UClass_AAsst2_EODriscollCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsst2_EODriscollCharacter), 1388820865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollCharacter_h_3670762080(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
