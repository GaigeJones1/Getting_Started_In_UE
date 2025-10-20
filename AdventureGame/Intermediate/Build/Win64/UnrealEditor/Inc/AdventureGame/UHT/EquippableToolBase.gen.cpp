// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/EquippableToolBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquippableToolBase() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AEquippableToolBase();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AEquippableToolBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEquippableToolBase Function BindInputAction *****************************
struct Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics
{
	struct EquippableToolBase_eventBindInputAction_Parms
	{
		const UInputAction* ActionToBind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Binds the Use function to the owning character\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binds the Use function to the owning character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionToBind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToBind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::NewProp_ActionToBind = { "ActionToBind", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquippableToolBase_eventBindInputAction_Parms, ActionToBind), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionToBind_MetaData), NewProp_ActionToBind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::NewProp_ActionToBind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEquippableToolBase, nullptr, "BindInputAction", Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::EquippableToolBase_eventBindInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::EquippableToolBase_eventBindInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEquippableToolBase_BindInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquippableToolBase_BindInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEquippableToolBase::execBindInputAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_ActionToBind);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindInputAction(Z_Param_ActionToBind);
	P_NATIVE_END;
}
// ********** End Class AEquippableToolBase Function BindInputAction *******************************

// ********** Begin Class AEquippableToolBase Function Use *****************************************
struct Z_Construct_UFunction_AEquippableToolBase_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use the tool\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the tool" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEquippableToolBase_Use_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEquippableToolBase, nullptr, "Use", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEquippableToolBase_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEquippableToolBase_Use_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEquippableToolBase_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEquippableToolBase_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEquippableToolBase::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use();
	P_NATIVE_END;
}
// ********** End Class AEquippableToolBase Function Use *******************************************

// ********** Begin Class AEquippableToolBase ******************************************************
void AEquippableToolBase::StaticRegisterNativesAEquippableToolBase()
{
	UClass* Class = AEquippableToolBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindInputAction", &AEquippableToolBase::execBindInputAction },
		{ "Use", &AEquippableToolBase::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEquippableToolBase;
UClass* AEquippableToolBase::GetPrivateStaticClass()
{
	using TClass = AEquippableToolBase;
	if (!Z_Registration_Info_UClass_AEquippableToolBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EquippableToolBase"),
			Z_Registration_Info_UClass_AEquippableToolBase.InnerSingleton,
			StaticRegisterNativesAEquippableToolBase,
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
	return Z_Registration_Info_UClass_AEquippableToolBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AEquippableToolBase_NoRegister()
{
	return AEquippableToolBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEquippableToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EquippableToolBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EquippableToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonToolAnim_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First Person animations\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonToolAnim_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Third Person animations\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Third Person animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMappingContext_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The input mapping context associated with this tool\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The input mapping context associated with this tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMeshComponent_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tool Skeletal Mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool Skeletal Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The character holding this tool\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The character holding this tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCooldown_MetaData[] = {
		{ "Category", "EquippableToolBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First Person animations\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person animations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonToolAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdPersonToolAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEquippableToolBase_BindInputAction, "BindInputAction" }, // 3017533447
		{ &Z_Construct_UFunction_AEquippableToolBase_Use, "Use" }, // 860737124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquippableToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_FirstPersonToolAnim = { "FirstPersonToolAnim", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, FirstPersonToolAnim), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonToolAnim_MetaData), NewProp_FirstPersonToolAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ThirdPersonToolAnim = { "ThirdPersonToolAnim", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, ThirdPersonToolAnim), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdPersonToolAnim_MetaData), NewProp_ThirdPersonToolAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ToolMappingContext = { "ToolMappingContext", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, ToolMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMappingContext_MetaData), NewProp_ToolMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ToolMeshComponent = { "ToolMeshComponent", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, ToolMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMeshComponent_MetaData), NewProp_ToolMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, OwningCharacter), Z_Construct_UClass_AAdventureCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacter_MetaData), NewProp_OwningCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_UseCooldown = { "UseCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEquippableToolBase, UseCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCooldown_MetaData), NewProp_UseCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquippableToolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_FirstPersonToolAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ThirdPersonToolAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ToolMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_ToolMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_OwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquippableToolBase_Statics::NewProp_UseCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEquippableToolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEquippableToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEquippableToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquippableToolBase_Statics::ClassParams = {
	&AEquippableToolBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEquippableToolBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEquippableToolBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEquippableToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEquippableToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEquippableToolBase()
{
	if (!Z_Registration_Info_UClass_AEquippableToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquippableToolBase.OuterSingleton, Z_Construct_UClass_AEquippableToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEquippableToolBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEquippableToolBase);
AEquippableToolBase::~AEquippableToolBase() {}
// ********** End Class AEquippableToolBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolBase_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEquippableToolBase, AEquippableToolBase::StaticClass, TEXT("AEquippableToolBase"), &Z_Registration_Info_UClass_AEquippableToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquippableToolBase), 1688244970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolBase_h__Script_AdventureGame_1985710953(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolBase_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolBase_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
