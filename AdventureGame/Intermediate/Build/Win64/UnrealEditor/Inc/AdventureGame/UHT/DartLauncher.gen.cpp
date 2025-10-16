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
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "DartLauncher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DartLauncher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn\n" },
#endif
		{ "ModuleRelativePath", "DartLauncher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADartLauncher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADartLauncher_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADartLauncher, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFirstPersonProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADartLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADartLauncher_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADartLauncher_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ADartLauncher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADartLauncher_Statics::PropPointers),
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
		{ Z_Construct_UClass_ADartLauncher, ADartLauncher::StaticClass, TEXT("ADartLauncher"), &Z_Registration_Info_UClass_ADartLauncher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADartLauncher), 3173150910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_3372885681(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_DartLauncher_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
