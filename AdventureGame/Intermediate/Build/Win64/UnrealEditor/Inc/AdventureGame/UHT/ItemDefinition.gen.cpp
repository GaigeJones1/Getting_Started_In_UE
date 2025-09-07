// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/ItemDefinition.h"
#include "AdventureGame/ItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemDefinition() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_UItemDefinition();
ADVENTUREGAME_API UClass* Z_Construct_UClass_UItemDefinition_NoRegister();
ADVENTUREGAME_API UEnum* Z_Construct_UEnum_AdventureGame_EItemType();
ADVENTUREGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemText();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemDefinition **********************************************************
void UItemDefinition::StaticRegisterNativesUItemDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDefinition;
UClass* UItemDefinition::GetPrivateStaticClass()
{
	using TClass = UItemDefinition;
	if (!Z_Registration_Info_UClass_UItemDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDefinition"),
			Z_Registration_Info_UClass_UItemDefinition.InnerSingleton,
			StaticRegisterNativesUItemDefinition,
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
	return Z_Registration_Info_UClass_UItemDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemDefinition_NoRegister()
{
	return UItemDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""Defines a basic item with a static mesh that can be built from the editor.\n*/" },
#endif
		{ "IncludePath", "ItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a basic item with a static mesh that can be built from the editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ID name of this item for referencing in a table row.\n" },
#endif
		{ "ModuleRelativePath", "ItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID name of this item for referencing in a table row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of this item.\n" },
#endif
		{ "ModuleRelativePath", "ItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of this item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemText_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text struct including the item name and description.\n" },
#endif
		{ "ModuleRelativePath", "ItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text struct including the item name and description." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Static Mesh used to display this item in the world.\n" },
#endif
		{ "ModuleRelativePath", "ItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Static Mesh used to display this item in the world." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemText;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, ItemType), Z_Construct_UEnum_AdventureGame_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2181869469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemText = { "ItemText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, ItemText), Z_Construct_UScriptStruct_FItemText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemText_MetaData), NewProp_ItemText_MetaData) }; // 631553463
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_WorldMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDefinition_Statics::ClassParams = {
	&UItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDefinition()
{
	if (!Z_Registration_Info_UClass_UItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDefinition.OuterSingleton, Z_Construct_UClass_UItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDefinition.OuterSingleton;
}
UItemDefinition::UItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDefinition);
UItemDefinition::~UItemDefinition() {}
// ********** End Class UItemDefinition ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemDefinition_h__Script_AdventureGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDefinition, UItemDefinition::StaticClass, TEXT("UItemDefinition"), &Z_Registration_Info_UClass_UItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDefinition), 2803779238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemDefinition_h__Script_AdventureGame_2547790886(TEXT("/Script/AdventureGame"),
	Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemDefinition_h__Script_AdventureGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemDefinition_h__Script_AdventureGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
