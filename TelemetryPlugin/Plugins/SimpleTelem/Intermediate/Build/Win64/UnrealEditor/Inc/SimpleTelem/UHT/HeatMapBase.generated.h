// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Telemetry/HeatMapBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLETELEM_HeatMapBase_generated_h
#error "HeatMapBase.generated.h already included, missing '#pragma once' in HeatMapBase.h"
#endif
#define SIMPLETELEM_HeatMapBase_generated_h

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHeatData_Statics; \
	SIMPLETELEM_API static class UScriptStruct* StaticStruct();


template<> SIMPLETELEM_API UScriptStruct* StaticStruct<struct FHeatData>();

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHeatDrawData_Statics; \
	SIMPLETELEM_API static class UScriptStruct* StaticStruct();


template<> SIMPLETELEM_API UScriptStruct* StaticStruct<struct FHeatDrawData>();

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddHeatData); \
	DECLARE_FUNCTION(execToggleReading); \
	DECLARE_FUNCTION(execToggleStorage); \
	DECLARE_FUNCTION(execLoadHeatMap); \
	DECLARE_FUNCTION(execToggleHeatMap);


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeatMapBase(); \
	friend struct Z_Construct_UClass_UHeatMapBase_Statics; \
public: \
	DECLARE_CLASS(UHeatMapBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleTelem"), NO_API) \
	DECLARE_SERIALIZER(UHeatMapBase)


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeatMapBase(UHeatMapBase&&); \
	UHeatMapBase(const UHeatMapBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeatMapBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeatMapBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHeatMapBase) \
	NO_API virtual ~UHeatMapBase();


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_30_PROLOG
#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLETELEM_API UClass* StaticClass<class UHeatMapBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
