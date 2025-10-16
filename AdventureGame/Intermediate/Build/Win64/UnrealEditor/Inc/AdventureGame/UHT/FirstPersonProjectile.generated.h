// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonProjectile.h"

#ifdef ADVENTUREGAME_FirstPersonProjectile_generated_h
#error "FirstPersonProjectile.generated.h already included, missing '#pragma once' in FirstPersonProjectile.h"
#endif
#define ADVENTUREGAME_FirstPersonProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AFirstPersonProjectile ***************************************************
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile_NoRegister();

#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonProjectile(); \
	friend struct Z_Construct_UClass_AFirstPersonProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVENTUREGAME_API UClass* Z_Construct_UClass_AFirstPersonProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AFirstPersonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdventureGame"), Z_Construct_UClass_AFirstPersonProjectile_NoRegister) \
	DECLARE_SERIALIZER(AFirstPersonProjectile)


#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFirstPersonProjectile(AFirstPersonProjectile&&) = delete; \
	AFirstPersonProjectile(const AFirstPersonProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonProjectile) \
	NO_API virtual ~AFirstPersonProjectile();


#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_13_PROLOG
#define FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFirstPersonProjectile;

// ********** End Class AFirstPersonProjectile *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_02GAIGE_JONES_Gaige_Jones_Repositories_Getting_Started_In_UE_AdventureGame_Source_AdventureGame_FirstPersonProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
