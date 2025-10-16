// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/FirstPersonProjectile.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirstPersonProjectile() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFirstPersonProjectile Function OnHit ************************************
struct Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics
{
	struct FirstPersonProjectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the projectile collides with an object\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the projectile collides with an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFirstPersonProjectile, nullptr, "OnHit", Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::FirstPersonProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::FirstPersonProjectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPersonProjectile_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonProjectile_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonProjectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AFirstPersonProjectile Function OnHit **************************************

// ********** Begin Class AFirstPersonProjectile ***************************************************
void AFirstPersonProjectile::StaticRegisterNativesAFirstPersonProjectile()
{
	UClass* Class = AFirstPersonProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &AFirstPersonProjectile::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFirstPersonProjectile;
UClass* AFirstPersonProjectile::GetPrivateStaticClass()
{
	using TClass = AFirstPersonProjectile;
	if (!Z_Registration_Info_UClass_AFirstPersonProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FirstPersonProjectile"),
			Z_Registration_Info_UClass_AFirstPersonProjectile.InnerSingleton,
			StaticRegisterNativesAFirstPersonProjectile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFirstPersonProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AFirstPersonProjectile_NoRegister()
{
	return AFirstPersonProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFirstPersonProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FirstPersonProjectile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile | Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere collision component \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Projectile | Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile movement component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifespan_MetaData[] = {
		{ "Category", "Projectile | Lifespan" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Despawn after 5 seconds by default\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawn after 5 seconds by default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsForce_MetaData[] = {
		{ "Category", "Projectile | Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of force this projectile imparts on objects it collides with\n" },
#endif
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of force this projectile imparts on objects it collides with" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile | Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh of the projectile in the world \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstPersonProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh of the projectile in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifespan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonProjectile_OnHit, "OnHit" }, // 3257414696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileLifespan = { "ProjectileLifespan", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonProjectile, ProjectileLifespan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileLifespan_MetaData), NewProp_ProjectileLifespan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_PhysicsForce = { "PhysicsForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonProjectile, PhysicsForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsForce_MetaData), NewProp_PhysicsForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileLifespan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_PhysicsForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonProjectile_Statics::NewProp_ProjectileMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstPersonProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonProjectile_Statics::ClassParams = {
	&AFirstPersonProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirstPersonProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonProjectile()
{
	if (!Z_Registration_Info_UClass_AFirstPersonProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonProjectile.OuterSingleton, Z_Construct_UClass_AFirstPersonProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonProjectile);
AFirstPersonProjectile::~AFirstPersonProjectile() {}
// ********** End Class AFirstPersonProjectile *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonProjectile, AFirstPersonProjectile::StaticClass, TEXT("AFirstPersonProjectile"), &Z_Registration_Info_UClass_AFirstPersonProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonProjectile), 463382004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h__Script_AdventureGame_154233785(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
