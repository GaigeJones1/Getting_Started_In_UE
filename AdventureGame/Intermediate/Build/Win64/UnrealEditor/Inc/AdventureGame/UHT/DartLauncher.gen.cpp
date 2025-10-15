// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/DartLauncher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDartLauncher() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADartLauncher();
ADVENTUREGAME_API UClass* Z_Construct_UClass_ADartLauncher_NoRegister();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AEquippableToolBase();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADartLauncher ************************************************************
void ADartLauncher::StaticRegisterNativesADartLauncher()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADartLauncher;
UClass* ADartLauncher::GetPrivateStaticClass()
{
	using TClass = ADartLauncher;
	if (!Z_Registration_Info_UClass_ADartLauncher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DartLauncher"),
			Z_Registration_Info_UClass_ADartLauncher.InnerSingleton,
			StaticRegisterNativesADartLauncher,
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
	return Z_Registration_Info_UClass_ADartLauncher.InnerSingleton;
}
UClass* Z_Construct_UClass_ADartLauncher_NoRegister()
{
	return ADartLauncher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADartLauncher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DartLauncher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DartLauncher.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADartLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADartLauncher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEquippableToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADartLauncher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADartLauncher_Statics::ClassParams = {
	&ADartLauncher::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADartLauncher_Statics::Class_MetaDataParams), Z_Construct_UClass_ADartLauncher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADartLauncher()
{
	if (!Z_Registration_Info_UClass_ADartLauncher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADartLauncher.OuterSingleton, Z_Construct_UClass_ADartLauncher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADartLauncher.OuterSingleton;
}
ADartLauncher::ADartLauncher() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADartLauncher);
ADartLauncher::~ADartLauncher() {}
// ********** End Class ADartLauncher **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADartLauncher, ADartLauncher::StaticClass, TEXT("ADartLauncher"), &Z_Registration_Info_UClass_ADartLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADartLauncher), 3523469745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_2057059785(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
