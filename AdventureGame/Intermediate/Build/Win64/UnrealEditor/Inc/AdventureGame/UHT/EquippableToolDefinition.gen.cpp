// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/EquippableToolDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEquippableToolDefinition() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_UEquippableToolDefinition();
ADVENTUREGAME_API UClass* Z_Construct_UClass_UEquippableToolDefinition_NoRegister();
ADVENTUREGAME_API UClass* Z_Construct_UClass_UItemDefinition();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEquippableToolDefinition Function CreateItemCopy ************************
struct Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics
{
	struct EquippableToolDefinition_eventCreateItemCopy_Parms
	{
		UEquippableToolDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create and return a copy of this item\n" },
#endif
		{ "ModuleRelativePath", "EquippableToolDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and return a copy of this item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquippableToolDefinition_eventCreateItemCopy_Parms, ReturnValue), Z_Construct_UClass_UEquippableToolDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEquippableToolDefinition, nullptr, "CreateItemCopy", Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::EquippableToolDefinition_eventCreateItemCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::EquippableToolDefinition_eventCreateItemCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquippableToolDefinition::execCreateItemCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquippableToolDefinition**)Z_Param__Result=P_THIS->CreateItemCopy();
	P_NATIVE_END;
}
// ********** End Class UEquippableToolDefinition Function CreateItemCopy **************************

// ********** Begin Class UEquippableToolDefinition ************************************************
void UEquippableToolDefinition::StaticRegisterNativesUEquippableToolDefinition()
{
	UClass* Class = UEquippableToolDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateItemCopy", &UEquippableToolDefinition::execCreateItemCopy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEquippableToolDefinition;
UClass* UEquippableToolDefinition::GetPrivateStaticClass()
{
	using TClass = UEquippableToolDefinition;
	if (!Z_Registration_Info_UClass_UEquippableToolDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EquippableToolDefinition"),
			Z_Registration_Info_UClass_UEquippableToolDefinition.InnerSingleton,
			StaticRegisterNativesUEquippableToolDefinition,
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
	return Z_Registration_Info_UClass_UEquippableToolDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UEquippableToolDefinition_NoRegister()
{
	return UEquippableToolDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEquippableToolDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EquippableToolDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "EquippableToolDefinition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippableToolDefinition_CreateItemCopy, "CreateItemCopy" }, // 2838542282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquippableToolDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquippableToolDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableToolDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquippableToolDefinition_Statics::ClassParams = {
	&UEquippableToolDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquippableToolDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquippableToolDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquippableToolDefinition()
{
	if (!Z_Registration_Info_UClass_UEquippableToolDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquippableToolDefinition.OuterSingleton, Z_Construct_UClass_UEquippableToolDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquippableToolDefinition.OuterSingleton;
}
UEquippableToolDefinition::UEquippableToolDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippableToolDefinition);
UEquippableToolDefinition::~UEquippableToolDefinition() {}
// ********** End Class UEquippableToolDefinition **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquippableToolDefinition, UEquippableToolDefinition::StaticClass, TEXT("UEquippableToolDefinition"), &Z_Registration_Info_UClass_UEquippableToolDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableToolDefinition), 3738275007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_518878053(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
