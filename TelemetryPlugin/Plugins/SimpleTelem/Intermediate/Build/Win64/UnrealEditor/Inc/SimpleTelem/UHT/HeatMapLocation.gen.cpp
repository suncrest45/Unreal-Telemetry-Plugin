// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTelem/Telemetry/HeatMapLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeatMapLocation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SIMPLETELEM_API UClass* Z_Construct_UClass_AHeatMapLocation();
SIMPLETELEM_API UClass* Z_Construct_UClass_AHeatMapLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleTelem();
// End Cross Module References

// Begin Class AHeatMapLocation Function UpdateColor
struct HeatMapLocation_eventUpdateColor_Parms
{
	int32 inputCount;
};
static FName NAME_AHeatMapLocation_UpdateColor = FName(TEXT("UpdateColor"));
void AHeatMapLocation::UpdateColor(int32 inputCount)
{
	HeatMapLocation_eventUpdateColor_Parms Parms;
	Parms.inputCount=inputCount;
	ProcessEvent(FindFunctionChecked(NAME_AHeatMapLocation_UpdateColor),&Parms);
}
struct Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HeatMaps" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Telemetry/HeatMapLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_inputCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::NewProp_inputCount = { "inputCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeatMapLocation_eventUpdateColor_Parms, inputCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::NewProp_inputCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatMapLocation, nullptr, "UpdateColor", nullptr, nullptr, Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::PropPointers), sizeof(HeatMapLocation_eventUpdateColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(HeatMapLocation_eventUpdateColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHeatMapLocation_UpdateColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeatMapLocation_UpdateColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHeatMapLocation::execUpdateColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_inputCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateColor_Implementation(Z_Param_inputCount);
	P_NATIVE_END;
}
// End Class AHeatMapLocation Function UpdateColor

// Begin Class AHeatMapLocation
void AHeatMapLocation::StaticRegisterNativesAHeatMapLocation()
{
	UClass* Class = AHeatMapLocation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateColor", &AHeatMapLocation::execUpdateColor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeatMapLocation);
UClass* Z_Construct_UClass_AHeatMapLocation_NoRegister()
{
	return AHeatMapLocation::StaticClass();
}
struct Z_Construct_UClass_AHeatMapLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Telemetry/HeatMapLocation.h" },
		{ "ModuleRelativePath", "Telemetry/HeatMapLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxCount_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_count;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeatMapLocation_UpdateColor, "UpdateColor" }, // 1651653405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeatMapLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeatMapLocation, count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_count_MetaData), NewProp_count_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_maxCount = { "maxCount", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeatMapLocation, maxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxCount_MetaData), NewProp_maxCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeatMapLocation, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeatMapLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_maxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatMapLocation_Statics::NewProp_id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeatMapLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeatMapLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeatMapLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeatMapLocation_Statics::ClassParams = {
	&AHeatMapLocation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHeatMapLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeatMapLocation_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeatMapLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeatMapLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeatMapLocation()
{
	if (!Z_Registration_Info_UClass_AHeatMapLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeatMapLocation.OuterSingleton, Z_Construct_UClass_AHeatMapLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeatMapLocation.OuterSingleton;
}
template<> SIMPLETELEM_API UClass* StaticClass<AHeatMapLocation>()
{
	return AHeatMapLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeatMapLocation);
AHeatMapLocation::~AHeatMapLocation() {}
// End Class AHeatMapLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeatMapLocation, AHeatMapLocation::StaticClass, TEXT("AHeatMapLocation"), &Z_Registration_Info_UClass_AHeatMapLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeatMapLocation), 1210024633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_2134336792(TEXT("/Script/SimpleTelem"),
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
