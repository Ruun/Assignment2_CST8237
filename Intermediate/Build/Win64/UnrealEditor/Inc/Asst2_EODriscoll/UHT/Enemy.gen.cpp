// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/Enemy.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AEnemy();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ASST2_EODRISCOLL_API UEnum* Z_Construct_UEnum_Asst2_EODriscoll_EAIState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
	static UEnum* EAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Asst2_EODriscoll_EAIState, (UObject*)Z_Construct_UPackage__Script_Asst2_EODriscoll(), TEXT("EAIState"));
		}
		return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enumerators[] = {
		{ "EAIState::Idle", (int64)EAIState::Idle },
		{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
		{ "EAIState::Alerted", (int64)EAIState::Alerted },
		{ "EAIState::Attack", (int64)EAIState::Attack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enum_MetaDataParams[] = {
		{ "Alerted.Name", "EAIState::Alerted" },
		{ "Attack.Name", "EAIState::Attack" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "EAIState::Idle" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "Suspicious.Name", "EAIState::Suspicious" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
		nullptr,
		"EAIState",
		"EAIState",
		Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Asst2_EODriscoll_EAIState()
	{
		if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_Asst2_EODriscoll_EAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
	}
	DEFINE_FUNCTION(AEnemy::execResetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execDealDamage)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DealDamage(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	struct Enemy_eventOnStateChanged_Parms
	{
		EAIState NewState;
	};
	static FName NAME_AEnemy_OnStateChanged = FName(TEXT("OnStateChanged"));
	void AEnemy::OnStateChanged(EAIState NewState)
	{
		Enemy_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_OnStateChanged),&Parms);
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DealDamage", &AEnemy::execDealDamage },
			{ "OnPawnSeen", &AEnemy::execOnPawnSeen },
			{ "ResetState", &AEnemy::execResetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_DealDamage_Statics
	{
		struct Enemy_eventDealDamage_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventDealDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventDealDamage_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventDealDamage_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventDealDamage_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventDealDamage_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_DealDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_DealDamage_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "DealDamage", nullptr, nullptr, Z_Construct_UFunction_AEnemy_DealDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_DealDamage_Statics::Enemy_eventDealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_DealDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_DealDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemy_DealDamage_Statics::Enemy_eventDealDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemy_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics
	{
		struct Enemy_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "OnPawnSeen", nullptr, nullptr, Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::Enemy_eventOnPawnSeen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::Enemy_eventOnPawnSeen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemy_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_OnStateChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_Asst2_EODriscoll_EAIState, METADATA_PARAMS(0, nullptr) }; // 2187433206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "OnStateChanged", nullptr, nullptr, Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::PropPointers), sizeof(Enemy_eventOnStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Enemy_eventOnStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemy_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_ResetState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_ResetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "ResetState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_ResetState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemy_ResetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_ResetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCollision;
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
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_DealDamage, "DealDamage" }, // 3196636719
		{ &Z_Construct_UFunction_AEnemy_OnPawnSeen, "OnPawnSeen" }, // 57334613
		{ &Z_Construct_UFunction_AEnemy_OnStateChanged, "OnStateChanged" }, // 1586376126
		{ &Z_Construct_UFunction_AEnemy_ResetState, "ResetState" }, // 458213379
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_PawnSensingComp_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_PawnSensingComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyCollision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyCollision = { "EnemyCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, EnemyCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyCollision_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, MaximumHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_MaximumHealth_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_MaximumHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_CurrentHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_PawnSensingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_MaximumHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	AEnemy::~AEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::EnumInfo[] = {
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2187433206U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 2920774203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_863509291(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
