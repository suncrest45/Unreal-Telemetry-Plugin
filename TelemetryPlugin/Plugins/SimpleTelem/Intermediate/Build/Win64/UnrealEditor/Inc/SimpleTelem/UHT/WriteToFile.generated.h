// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WriteToFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLETELEM_WriteToFile_generated_h
#error "WriteToFile.generated.h already included, missing '#pragma once' in WriteToFile.h"
#endif
#define SIMPLETELEM_WriteToFile_generated_h

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWriteToFile);


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWriteToFile(); \
	friend struct Z_Construct_UClass_UWriteToFile_Statics; \
public: \
	DECLARE_CLASS(UWriteToFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleTelem"), NO_API) \
	DECLARE_SERIALIZER(UWriteToFile)


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWriteToFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWriteToFile(UWriteToFile&&); \
	UWriteToFile(const UWriteToFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWriteToFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWriteToFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWriteToFile) \
	NO_API virtual ~UWriteToFile();


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_13_PROLOG
#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_INCLASS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLETELEM_API UClass* StaticClass<class UWriteToFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
