// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdventureCharacter.h"

#ifdef ADVENTUREGAME_AdventureCharacter_generated_h
#error "AdventureCharacter.generated.h already included, missing '#pragma once' in AdventureCharacter.h"
#endif
#define ADVENTUREGAME_AdventureCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquippableToolDefinition;
class UItemDefinition;
struct FInputActionValue;

// ********** Begin Class AAdventureCharacter ******************************************************
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraTargetLocation); \
	DECLARE_FUNCTION(execUnequipCurrentTool); \
	DECLARE_FUNCTION(execIsToolAlreadyOwned); \
	DECLARE_FUNCTION(execGiveItem); \
	DECLARE_FUNCTION(execAttachTool); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister();

#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdventureCharacter(); \
	friend struct Z_Construct_UClass_AAdventureCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVENTUREGAME_API UClass* Z_Construct_UClass_AAdventureCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAdventureCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdventureGame"), Z_Construct_UClass_AAdventureCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAdventureCharacter)


#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAdventureCharacter(AAdventureCharacter&&) = delete; \
	AAdventureCharacter(const AAdventureCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdventureCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdventureCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdventureCharacter) \
	NO_API virtual ~AAdventureCharacter();


#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_22_PROLOG
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAdventureCharacter;

// ********** End Class AAdventureCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_AdventureCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
