// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asst2_EODriscoll/Asst2_EODriscollProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsst2_EODriscollProjectile() {}
// Cross Module References
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollProjectile();
	ASST2_EODRISCOLL_API UClass* Z_Construct_UClass_AAsst2_EODriscollProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Asst2_EODriscoll();
// End Cross Module References
	void AAsst2_EODriscollProjectile::StaticRegisterNativesAAsst2_EODriscollProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsst2_EODriscollProjectile);
	UClass* Z_Construct_UClass_AAsst2_EODriscollProjectile_NoRegister()
	{
		return AAsst2_EODriscollProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Asst2_EODriscoll,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asst2_EODriscollProjectile.h" },
		{ "ModuleRelativePath", "Asst2_EODriscollProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asst2_EODriscollProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Asst2_EODriscollProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsst2_EODriscollProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::NewProp_ProjectileMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsst2_EODriscollProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::ClassParams = {
		&AAsst2_EODriscollProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAsst2_EODriscollProjectile()
	{
		if (!Z_Registration_Info_UClass_AAsst2_EODriscollProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsst2_EODriscollProjectile.OuterSingleton, Z_Construct_UClass_AAsst2_EODriscollProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAsst2_EODriscollProjectile.OuterSingleton;
	}
	template<> ASST2_EODRISCOLL_API UClass* StaticClass<AAsst2_EODriscollProjectile>()
	{
		return AAsst2_EODriscollProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsst2_EODriscollProjectile);
	AAsst2_EODriscollProjectile::~AAsst2_EODriscollProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAsst2_EODriscollProjectile, AAsst2_EODriscollProjectile::StaticClass, TEXT("AAsst2_EODriscollProjectile"), &Z_Registration_Info_UClass_AAsst2_EODriscollProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsst2_EODriscollProjectile), 3446817661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollProjectile_h_883247170(TEXT("/Script/Asst2_EODriscoll"),
		Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_simo0173_Downloads_shooter_main_shooter_main_Source_Asst2_EODriscoll_Asst2_EODriscollProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
