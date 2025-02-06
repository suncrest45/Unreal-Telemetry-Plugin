// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data_Recording/Telemetry_Component.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLETELEM_Telemetry_Component_generated_h
#error "Telemetry_Component.generated.h already included, missing '#pragma once' in Telemetry_Component.h"
#endif
#define SIMPLETELEM_Telemetry_Component_generated_h

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisplayTelemetry); \
	DECLARE_FUNCTION(execPrintTelemetry); \
	DECLARE_FUNCTION(execAddTrackersAsRotator); \
	DECLARE_FUNCTION(execAddTrackersAsName); \
	DECLARE_FUNCTION(execAddTrackersAsVector); \
	DECLARE_FUNCTION(execAddTrackersAsBool); \
	DECLARE_FUNCTION(execAddTrackersAsString); \
	DECLARE_FUNCTION(execAddTrackersAsFloat); \
	DECLARE_FUNCTION(execAddTrackersAsInt); \
	DECLARE_FUNCTION(execGetValuesString); \
	DECLARE_FUNCTION(execGetHeadersString); \
	DECLARE_FUNCTION(execConcatenateKeysAndValues);


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelemetry_Component(); \
	friend struct Z_Construct_UClass_UTelemetry_Component_Statics; \
public: \
	DECLARE_CLASS(UTelemetry_Component, UBlackboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleTelem"), NO_API) \
	DECLARE_SERIALIZER(UTelemetry_Component)


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTelemetry_Component(UTelemetry_Component&&); \
	UTelemetry_Component(const UTelemetry_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelemetry_Component); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelemetry_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTelemetry_Component) \
	NO_API virtual ~UTelemetry_Component();


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_30_PROLOG
#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_INCLASS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLETELEM_API UClass* StaticClass<class UTelemetry_Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h


#define FOREACH_ENUM_EKEYTPE(op) \
	op(Type_Unknown) \
	op(Type_Int) \
	op(Type_Float) \
	op(Type_String) \
	op(Type_Bool) \
	op(Type_Enum) \
	op(Type_Vector) \
	op(Type_Rotator) \
	op(Type_Name) 

enum EKeyTpe : uint8;
template<> SIMPLETELEM_API UEnum* StaticEnum<EKeyTpe>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
