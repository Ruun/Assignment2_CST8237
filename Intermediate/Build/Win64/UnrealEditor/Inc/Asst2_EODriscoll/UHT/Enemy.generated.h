// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPrimitiveComponent;
enum class EAIState : uint8;
struct FHitResult;
#ifdef ASST2_EODRISCOLL_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define ASST2_EODRISCOLL_Enemy_generated_h

#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_SPARSE_DATA
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execDealDamage); \
	DECLARE_FUNCTION(execOnPawnSeen);


#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_ACCESSORS
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_CALLBACK_WRAPPERS
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asst2_EODriscoll"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_23_PROLOG
#define FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_SPARSE_DATA \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_ACCESSORS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_CALLBACK_WRAPPERS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASST2_EODRISCOLL_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Enemy_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) \
	op(EAIState::Attack) 

enum class EAIState : uint8;
template<> struct TIsUEnumClass<EAIState> { enum { Value = true }; };
template<> ASST2_EODRISCOLL_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
