// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemData.h"

#ifdef ADVENTUREGAME_ItemData_generated_h
#error "ItemData.generated.h already included, missing '#pragma once' in ItemData.h"
#endif
#define ADVENTUREGAME_ItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemText *********************************************************
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_ItemData_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemText_Statics; \
	ADVENTUREGAME_API static class UScriptStruct* StaticStruct();


struct FItemText;
// ********** End ScriptStruct FItemText ***********************************************************

// ********** Begin ScriptStruct FItemData *********************************************************
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_ItemData_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	ADVENTUREGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FItemData;
// ********** End ScriptStruct FItemData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_ItemData_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Tool) \
	op(EItemType::Consumable) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> ADVENTUREGAME_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
