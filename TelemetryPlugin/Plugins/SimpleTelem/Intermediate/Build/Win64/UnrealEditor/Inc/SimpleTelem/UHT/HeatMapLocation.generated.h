// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Telemetry/HeatMapLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLETELEM_HeatMapLocation_generated_h
#error "HeatMapLocation.generated.h already included, missing '#pragma once' in HeatMapLocation.h"
#endif
#define SIMPLETELEM_HeatMapLocation_generated_h

#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateColor_Implementation(int32 inputCount); \
	DECLARE_FUNCTION(execUpdateColor);


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_CALLBACK_WRAPPERS
#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeatMapLocation(); \
	friend struct Z_Construct_UClass_AHeatMapLocation_Statics; \
public: \
	DECLARE_CLASS(AHeatMapLocation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleTelem"), NO_API) \
	DECLARE_SERIALIZER(AHeatMapLocation)


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHeatMapLocation(AHeatMapLocation&&); \
	AHeatMapLocation(const AHeatMapLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeatMapLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeatMapLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeatMapLocation) \
	NO_API virtual ~AHeatMapLocation();


#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_9_PROLOG
#define FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_CALLBACK_WRAPPERS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_INCLASS_NO_PURE_DECLS \
	FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLETELEM_API UClass* StaticClass<class AHeatMapLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
