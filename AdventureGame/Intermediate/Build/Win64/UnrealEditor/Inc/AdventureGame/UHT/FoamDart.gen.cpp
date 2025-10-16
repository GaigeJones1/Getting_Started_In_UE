// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/FoamDart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFoamDart() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFoamDart();
ADVENTUREGAME_API UClass* Z_Construct_UClass_AFoamDart_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFoamDart ****************************************************************
void AFoamDart::StaticRegisterNativesAFoamDart()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFoamDart;
UClass* AFoamDart::GetPrivateStaticClass()
{
	using TClass = AFoamDart;
	if (!Z_Registration_Info_UClass_AFoamDart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FoamDart"),
			Z_Registration_Info_UClass_AFoamDart.InnerSingleton,
			StaticRegisterNativesAFoamDart,
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
	return Z_Registration_Info_UClass_AFoamDart.InnerSingleton;
}
UClass* Z_Construct_UClass_AFoamDart_NoRegister()
{
	return AFoamDart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFoamDart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FoamDart.h" },
		{ "ModuleRelativePath", "FoamDart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoamDart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFoamDart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFirstPersonProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFoamDart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoamDart_Statics::ClassParams = {
	&AFoamDart::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFoamDart_Statics::Class_MetaDataParams), Z_Construct_UClass_AFoamDart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFoamDart()
{
	if (!Z_Registration_Info_UClass_AFoamDart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoamDart.OuterSingleton, Z_Construct_UClass_AFoamDart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFoamDart.OuterSingleton;
}
AFoamDart::AFoamDart() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFoamDart);
AFoamDart::~AFoamDart() {}
// ********** End Class AFoamDart ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FoamDart_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFoamDart, AFoamDart::StaticClass, TEXT("AFoamDart"), &Z_Registration_Info_UClass_AFoamDart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoamDart), 2692029844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FoamDart_h__Script_AdventureGame_565636425(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FoamDart_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FoamDart_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
