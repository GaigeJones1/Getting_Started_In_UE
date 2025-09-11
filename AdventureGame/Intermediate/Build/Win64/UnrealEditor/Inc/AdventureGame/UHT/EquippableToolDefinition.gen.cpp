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

// ********** Begin Class UEquippableToolDefinition ************************************************
void UEquippableToolDefinition::StaticRegisterNativesUEquippableToolDefinition()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EquippableToolDefinition.h" },
		{ "ModuleRelativePath", "EquippableToolDefinition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UEquippableToolDefinition, UEquippableToolDefinition::StaticClass, TEXT("UEquippableToolDefinition"), &Z_Registration_Info_UClass_UEquippableToolDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquippableToolDefinition), 2725015571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_3713130757(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_EquippableToolDefinition_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
