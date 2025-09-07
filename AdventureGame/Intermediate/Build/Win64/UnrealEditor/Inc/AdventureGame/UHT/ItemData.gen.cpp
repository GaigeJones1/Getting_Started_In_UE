// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdventureGame/ItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemData() {}

// ********** Begin Cross Module References ********************************************************
ADVENTUREGAME_API UClass* Z_Construct_UClass_UItemDefinition_NoRegister();
ADVENTUREGAME_API UEnum* Z_Construct_UEnum_AdventureGame_EItemType();
ADVENTUREGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
ADVENTUREGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemText();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_AdventureGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdventureGame_EItemType, (UObject*)Z_Construct_UPackage__Script_AdventureGame(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> ADVENTUREGAME_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_AdventureGame_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""Defines the type of the item.\n*/" },
#endif
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "ModuleRelativePath", "ItemData.h" },
		{ "Tool.DisplayName", "Tool" },
		{ "Tool.Name", "EItemType::Tool" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the type of the item." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Tool", (int64)EItemType::Tool },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdventureGame_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdventureGame,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_AdventureGame_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdventureGame_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdventureGame_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdventureGame_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdventureGame_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_AdventureGame_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// ********** End Enum EItemType *******************************************************************

// ********** Begin ScriptStruct FItemText *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemText;
class UScriptStruct* FItemText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemText, (UObject*)Z_Construct_UPackage__Script_AdventureGame(), TEXT("ItemText"));
	}
	return Z_Registration_Info_UScriptStruct_FItemText.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""Contains textual data about the item.\n*/" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains textual data about the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The text name of the item.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text name of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The text description of the item.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text description of the item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemText>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemText, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemText_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemText, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemText_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemText_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
	nullptr,
	&NewStructOps,
	"ItemText",
	Z_Construct_UScriptStruct_FItemText_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemText_Statics::PropPointers),
	sizeof(FItemText),
	alignof(FItemText),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemText_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemText_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemText()
{
	if (!Z_Registration_Info_UScriptStruct_FItemText.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemText.InnerSingleton, Z_Construct_UScriptStruct_FItemText_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemText.InnerSingleton;
}
// ********** End ScriptStruct FItemText ***********************************************************

// ********** Begin ScriptStruct FItemData *********************************************************
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_AdventureGame(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""Defines a basic item that can be used in a data table.\n*/" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a basic item that can be used in a data table." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ID name of this item for referencing in a table row.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID name of this item for referencing in a table row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The type of the item.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of the item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemText_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text struct including the item name and description.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text struct including the item name and description." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBase_MetaData[] = {
		{ "Category", "Item Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Data Asset item definition associated with this item.\n" },
#endif
		{ "ModuleRelativePath", "ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Data Asset item definition associated with this item." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_AdventureGame_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2181869469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemText = { "ItemText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemText), Z_Construct_UScriptStruct_FItemText, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemText_MetaData), NewProp_ItemText_MetaData) }; // 631553463
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemBase = { "ItemBase", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemBase), Z_Construct_UClass_UItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBase_MetaData), NewProp_ItemBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdventureGame,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton;
}
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2181869469U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemText::StaticStruct, Z_Construct_UScriptStruct_FItemText_Statics::NewStructOps, TEXT("ItemText"), &Z_Registration_Info_UScriptStruct_FItemText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemText), 631553463U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_FItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 164993268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_1816020643(TEXT("/Script/AdventureGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdventureGame_Source_AdventureGame_ItemData_h__Script_AdventureGame_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
