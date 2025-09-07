// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/AdventureCharacter.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAdventureCharacter() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureCharacter();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAdventureCharacter Function Look ****************************************
struct Z_Construct_UFunction_AAdventureCharacter_Look_Statics
{
	struct AdventureCharacter_eventLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles Look Input\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles Look Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdventureCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdventureCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdventureCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdventureCharacter_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdventureCharacter_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdventureCharacter, nullptr, "Look", Z_Construct_UFunction_AAdventureCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdventureCharacter_Look_Statics::AdventureCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdventureCharacter_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAdventureCharacter_Look_Statics::AdventureCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdventureCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdventureCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdventureCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AAdventureCharacter Function Look ******************************************

// ********** Begin Class AAdventureCharacter Function Move ****************************************
struct Z_Construct_UFunction_AAdventureCharacter_Move_Statics
{
	struct AdventureCharacter_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles 2D Movement Input\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles 2D Movement Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAdventureCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AdventureCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAdventureCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAdventureCharacter_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAdventureCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAdventureCharacter, nullptr, "Move", Z_Construct_UFunction_AAdventureCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAdventureCharacter_Move_Statics::AdventureCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAdventureCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAdventureCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAdventureCharacter_Move_Statics::AdventureCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAdventureCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAdventureCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAdventureCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AAdventureCharacter Function Move ******************************************

// ********** Begin Class AAdventureCharacter ******************************************************
void AAdventureCharacter::StaticRegisterNativesAAdventureCharacter()
{
	UClass* Class = AAdventureCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AAdventureCharacter::execLook },
		{ "Move", &AAdventureCharacter::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAdventureCharacter;
UClass* AAdventureCharacter::GetPrivateStaticClass()
{
	using TClass = AAdventureCharacter;
	if (!Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AdventureCharacter"),
			Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton,
			StaticRegisterNativesAAdventureCharacter,
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
	return Z_Registration_Info_UClass_AAdventureCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister()
{
	return AAdventureCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAdventureCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdventureCharacter.h" },
		{ "ModuleRelativePath", "AdventureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonDefaultAnim_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First Person animations\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "AdventureCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Input Actions\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Jump Input Actions\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Look Input Actions\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First Person camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraOffset_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset for the first-person camera\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset for the first-person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonFieldOfView_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First-person camera field of view\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First-person camera field of view" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonScale_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First-person camera view scale\n" },
#endif
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First-person camera view scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First-person mesh, visible only to the owning player\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdventureCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First-person mesh, visible only to the owning player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonDefaultAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPersonCameraOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonFieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstPersonScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAdventureCharacter_Look, "Look" }, // 2266741242
		{ &Z_Construct_UFunction_AAdventureCharacter_Move, "Move" }, // 2035616715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdventureCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonDefaultAnim = { "FirstPersonDefaultAnim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonDefaultAnim), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonDefaultAnim_MetaData), NewProp_FirstPersonDefaultAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonContext = { "FirstPersonContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonContext_MetaData), NewProp_FirstPersonContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonCameraOffset = { "FirstPersonCameraOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonCameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraOffset_MetaData), NewProp_FirstPersonCameraOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonFieldOfView = { "FirstPersonFieldOfView", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonFieldOfView_MetaData), NewProp_FirstPersonFieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonScale = { "FirstPersonScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonScale_MetaData), NewProp_FirstPersonScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonMeshComponent = { "FirstPersonMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAdventureCharacter, FirstPersonMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMeshComponent_MetaData), NewProp_FirstPersonMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdventureCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonDefaultAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonCameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonFieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdventureCharacter_Statics::NewProp_FirstPersonMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAdventureCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdventureCharacter_Statics::ClassParams = {
	&AAdventureCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAdventureCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAdventureCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAdventureCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAdventureCharacter()
{
	if (!Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton, Z_Construct_UClass_AAdventureCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAdventureCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAdventureCharacter);
AAdventureCharacter::~AAdventureCharacter() {}
// ********** End Class AAdventureCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_AdventureCharacter_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAdventureCharacter, AAdventureCharacter::StaticClass, TEXT("AAdventureCharacter"), &Z_Registration_Info_UClass_AAdventureCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdventureCharacter), 517466051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_AdventureCharacter_h__Script_AdventureGame_523152543(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_AdventureCharacter_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_AdventureCharacter_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
