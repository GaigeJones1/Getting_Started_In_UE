// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/PickupBase.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickupBase() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_APickupBase();
ADVENTUREGAME_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
ADVENTUREGAME_API UClass* Z_Construct_UClass_UItemDefinition_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickupBase Function OnSphereBeginOverlap ********************************
struct Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics
{
	struct PickupBase_eventOnSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when something overlaps this pickup's sphere\n" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when something overlaps this pickup's sphere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupBase_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupBase_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupBase_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupBase_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PickupBase_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupBase_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupBase_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "OnSphereBeginOverlap", Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PickupBase_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::PickupBase_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickupBase::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APickupBase Function OnSphereBeginOverlap **********************************

// ********** Begin Class APickupBase Function ResetPickupCooldown *********************************
struct Z_Construct_UFunction_APickupBase_ResetPickupCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function to reset the pickup\xe2\x80\x99s cooldown state */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to reset the pickup\xe2\x80\x99s cooldown state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_ResetPickupCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "ResetPickupCooldown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_ResetPickupCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_ResetPickupCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APickupBase_ResetPickupCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_ResetPickupCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickupBase::execResetPickupCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPickupCooldown();
	P_NATIVE_END;
}
// ********** End Class APickupBase Function ResetPickupCooldown ***********************************

// ********** Begin Class APickupBase **************************************************************
void APickupBase::StaticRegisterNativesAPickupBase()
{
	UClass* Class = APickupBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereBeginOverlap", &APickupBase::execOnSphereBeginOverlap },
		{ "ResetPickupCooldown", &APickupBase::execResetPickupCooldown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APickupBase;
UClass* APickupBase::GetPrivateStaticClass()
{
	using TClass = APickupBase;
	if (!Z_Registration_Info_UClass_APickupBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PickupBase"),
			Z_Registration_Info_UClass_APickupBase.InnerSingleton,
			StaticRegisterNativesAPickupBase,
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
	return Z_Registration_Info_UClass_APickupBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APickupBase_NoRegister()
{
	return APickupBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickupBase.h" },
		{ "ModuleRelativePath", "PickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Pickup Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision sphere for detecting player overlap */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision sphere for detecting player overlap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMeshComponent_MetaData[] = {
		{ "Category", "Pickup Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The visible mesh of the pickup */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visible mesh of the pickup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupDataTable_MetaData[] = {
		{ "Category", "Pickup Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataTable that defines the pickup\xe2\x80\x99s item info */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable that defines the pickup\xe2\x80\x99s item info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupItemID_MetaData[] = {
		{ "Category", "Pickup Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The row name from the DataTable to use */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The row name from the DataTable to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceItem_MetaData[] = {
		{ "Category", "Pickup Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The actual item this pickup represents */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual item this pickup represents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRespawn_MetaData[] = {
		{ "Category", "Pickup Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the pickup respawn after being collected? */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the pickup respawn after being collected?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Pickup Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time (in seconds) before the pickup respawns */" },
#endif
		{ "EditCondition", "bShouldRespawn" },
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time (in seconds) before the pickup respawns" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBePickedUp_MetaData[] = {
		{ "Category", "Pickup Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the pickup can currently be collected */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the pickup can currently be collected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupCooldown_MetaData[] = {
		{ "Category", "Pickup Cooldown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cooldown duration (seconds) before pickup can trigger again */" },
#endif
		{ "ModuleRelativePath", "PickupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cooldown duration (seconds) before pickup can trigger again" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupDataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PickupItemID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceItem;
	static void NewProp_bShouldRespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
	static void NewProp_bCanBePickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBePickedUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupBase_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 1271321654
		{ &Z_Construct_UFunction_APickupBase_ResetPickupCooldown, "ResetPickupCooldown" }, // 3555066515
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMeshComponent = { "PickupMeshComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMeshComponent_MetaData), NewProp_PickupMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupDataTable = { "PickupDataTable", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupDataTable_MetaData), NewProp_PickupDataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupItemID = { "PickupItemID", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupItemID_MetaData), NewProp_PickupItemID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_ReferenceItem = { "ReferenceItem", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, ReferenceItem), Z_Construct_UClass_UItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceItem_MetaData), NewProp_ReferenceItem_MetaData) };
void Z_Construct_UClass_APickupBase_Statics::NewProp_bShouldRespawn_SetBit(void* Obj)
{
	((APickupBase*)Obj)->bShouldRespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_bShouldRespawn = { "bShouldRespawn", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupBase), &Z_Construct_UClass_APickupBase_Statics::NewProp_bShouldRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRespawn_MetaData), NewProp_bShouldRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, RespawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
void Z_Construct_UClass_APickupBase_Statics::NewProp_bCanBePickedUp_SetBit(void* Obj)
{
	((APickupBase*)Obj)->bCanBePickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_bCanBePickedUp = { "bCanBePickedUp", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupBase), &Z_Construct_UClass_APickupBase_Statics::NewProp_bCanBePickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBePickedUp_MetaData), NewProp_bCanBePickedUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCooldown = { "PickupCooldown", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupCooldown_MetaData), NewProp_PickupCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_ReferenceItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_bShouldRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_RespawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_bCanBePickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupBase_Statics::ClassParams = {
	&APickupBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickupBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupBase()
{
	if (!Z_Registration_Info_UClass_APickupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupBase.OuterSingleton, Z_Construct_UClass_APickupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupBase);
APickupBase::~APickupBase() {}
// ********** End Class APickupBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_PickupBase_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupBase, APickupBase::StaticClass, TEXT("APickupBase"), &Z_Registration_Info_UClass_APickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupBase), 4283081811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_PickupBase_h__Script_AdventureGame_616650566(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_PickupBase_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_PickupBase_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
