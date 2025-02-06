// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTelem/Telemetry/HeatMapBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeatMapBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLETELEM_API UClass* Z_Construct_UClass_AHeatMapLocation_NoRegister();
SIMPLETELEM_API UClass* Z_Construct_UClass_UHeatMapBase();
SIMPLETELEM_API UClass* Z_Construct_UClass_UHeatMapBase_NoRegister();
SIMPLETELEM_API UScriptStruct* Z_Construct_UScriptStruct_FHeatData();
SIMPLETELEM_API UScriptStruct* Z_Construct_UScriptStruct_FHeatDrawData();
UPackage* Z_Construct_UPackage__Script_SimpleTelem();
// End Cross Module References

// Begin ScriptStruct FHeatData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeatData;
class UScriptStruct* FHeatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeatData, (UObject*)Z_Construct_UPackage__Script_SimpleTelem(), TEXT("HeatData"));
	}
	return Z_Registration_Info_UScriptStruct_HeatData.OuterSingleton;
}
template<> SIMPLETELEM_API UScriptStruct* StaticStruct<FHeatData>()
{
	return FHeatData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHeatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pos_MetaData[] = {
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rot_MetaData[] = {
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeatData_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeatData, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pos_MetaData), NewProp_pos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeatData_Statics::NewProp_rot = { "rot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeatData, rot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rot_MetaData), NewProp_rot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeatData_Statics::NewProp_pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeatData_Statics::NewProp_rot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
	nullptr,
	&NewStructOps,
	"HeatData",
	Z_Construct_UScriptStruct_FHeatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatData_Statics::PropPointers),
	sizeof(FHeatData),
	alignof(FHeatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeatData()
{
	if (!Z_Registration_Info_UScriptStruct_HeatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeatData.InnerSingleton, Z_Construct_UScriptStruct_FHeatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HeatData.InnerSingleton;
}
// End ScriptStruct FHeatData

// Begin ScriptStruct FHeatDrawData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeatDrawData;
class UScriptStruct* FHeatDrawData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeatDrawData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeatDrawData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeatDrawData, (UObject*)Z_Construct_UPackage__Script_SimpleTelem(), TEXT("HeatDrawData"));
	}
	return Z_Registration_Info_UScriptStruct_HeatDrawData.OuterSingleton;
}
template<> SIMPLETELEM_API UScriptStruct* StaticStruct<FHeatDrawData>()
{
	return FHeatDrawData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHeatDrawData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seenCount_MetaData[] = {
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_seenCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeatDrawData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHeatDrawData_Statics::NewProp_seenCount = { "seenCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeatDrawData, seenCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seenCount_MetaData), NewProp_seenCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeatDrawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeatDrawData_Statics::NewProp_seenCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatDrawData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeatDrawData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
	nullptr,
	&NewStructOps,
	"HeatDrawData",
	Z_Construct_UScriptStruct_FHeatDrawData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatDrawData_Statics::PropPointers),
	sizeof(FHeatDrawData),
	alignof(FHeatDrawData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeatDrawData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeatDrawData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeatDrawData()
{
	if (!Z_Registration_Info_UScriptStruct_HeatDrawData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeatDrawData.InnerSingleton, Z_Construct_UScriptStruct_FHeatDrawData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HeatDrawData.InnerSingleton;
}
// End ScriptStruct FHeatDrawData

// Begin Class UHeatMapBase Function AddHeatData
struct Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics
{
	struct HeatMapBase_eventAddHeatData_Parms
	{
		FVector Position;
		FVector Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heat Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add heat data to the heat map\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add heat data to the heat map" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeatMapBase_eventAddHeatData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeatMapBase_eventAddHeatData_Parms, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatMapBase, nullptr, "AddHeatData", nullptr, nullptr, Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::HeatMapBase_eventAddHeatData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::HeatMapBase_eventAddHeatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeatMapBase_AddHeatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeatMapBase_AddHeatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeatMapBase::execAddHeatData)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHeatData(Z_Param_Position,Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class UHeatMapBase Function AddHeatData

// Begin Class UHeatMapBase Function LoadHeatMap
struct Z_Construct_UFunction_UHeatMapBase_LoadHeatMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heat Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle heat map drawing\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle heat map drawing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatMapBase_LoadHeatMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatMapBase, nullptr, "LoadHeatMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_LoadHeatMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeatMapBase_LoadHeatMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeatMapBase_LoadHeatMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeatMapBase_LoadHeatMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeatMapBase::execLoadHeatMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadHeatMap();
	P_NATIVE_END;
}
// End Class UHeatMapBase Function LoadHeatMap

// Begin Class UHeatMapBase Function ToggleHeatMap
struct Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heat Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle heat map drawing\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle heat map drawing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatMapBase, nullptr, "ToggleHeatMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeatMapBase::execToggleHeatMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleHeatMap();
	P_NATIVE_END;
}
// End Class UHeatMapBase Function ToggleHeatMap

// Begin Class UHeatMapBase Function ToggleReading
struct Z_Construct_UFunction_UHeatMapBase_ToggleReading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heat Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle data reading\n// NOTE: THIS WILL CLEAR ALL CURRENT DATA\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle data reading\nNOTE: THIS WILL CLEAR ALL CURRENT DATA" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatMapBase_ToggleReading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatMapBase, nullptr, "ToggleReading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_ToggleReading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeatMapBase_ToggleReading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeatMapBase_ToggleReading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeatMapBase_ToggleReading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeatMapBase::execToggleReading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleReading();
	P_NATIVE_END;
}
// End Class UHeatMapBase Function ToggleReading

// Begin Class UHeatMapBase Function ToggleStorage
struct Z_Construct_UFunction_UHeatMapBase_ToggleStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Heat Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Toggle data storage\n// NOTE: THIS WILL CLEAR ALL CURRENT DATA\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle data storage\nNOTE: THIS WILL CLEAR ALL CURRENT DATA" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatMapBase_ToggleStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatMapBase, nullptr, "ToggleStorage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatMapBase_ToggleStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeatMapBase_ToggleStorage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeatMapBase_ToggleStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeatMapBase_ToggleStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeatMapBase::execToggleStorage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleStorage();
	P_NATIVE_END;
}
// End Class UHeatMapBase Function ToggleStorage

// Begin Class UHeatMapBase
void UHeatMapBase::StaticRegisterNativesUHeatMapBase()
{
	UClass* Class = UHeatMapBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHeatData", &UHeatMapBase::execAddHeatData },
		{ "LoadHeatMap", &UHeatMapBase::execLoadHeatMap },
		{ "ToggleHeatMap", &UHeatMapBase::execToggleHeatMap },
		{ "ToggleReading", &UHeatMapBase::execToggleReading },
		{ "ToggleStorage", &UHeatMapBase::execToggleStorage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeatMapBase);
UClass* Z_Construct_UClass_UHeatMapBase_NoRegister()
{
	return UHeatMapBase::StaticClass();
}
struct Z_Construct_UClass_UHeatMapBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Telemetry" },
		{ "IncludePath", "Telemetry/HeatMapBase.h" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SpawnedActor_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__timerReset_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__drawHeatMap_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__EnableDataStoring_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__EnableDataReading_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AppendData_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__dataFileName_MetaData[] = {
		{ "Category", "HeatMap" },
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__renderOffset_MetaData[] = {
		{ "Category", "HeatMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the origin of your blueprint is not at the bottom of it, use this to adjust where the heat map is rendered relative to your object\n" },
#endif
		{ "ModuleRelativePath", "Telemetry/HeatMapBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the origin of your blueprint is not at the bottom of it, use this to adjust where the heat map is rendered relative to your object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__SpawnedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__timerReset;
	static void NewProp__drawHeatMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__drawHeatMap;
	static void NewProp__EnableDataStoring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__EnableDataStoring;
	static void NewProp__EnableDataReading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__EnableDataReading;
	static void NewProp__AppendData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__AppendData;
	static const UECodeGen_Private::FStrPropertyParams NewProp__dataFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp__renderOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeatMapBase_AddHeatData, "AddHeatData" }, // 3886787578
		{ &Z_Construct_UFunction_UHeatMapBase_LoadHeatMap, "LoadHeatMap" }, // 4092755068
		{ &Z_Construct_UFunction_UHeatMapBase_ToggleHeatMap, "ToggleHeatMap" }, // 3879768915
		{ &Z_Construct_UFunction_UHeatMapBase_ToggleReading, "ToggleReading" }, // 663004444
		{ &Z_Construct_UFunction_UHeatMapBase_ToggleStorage, "ToggleStorage" }, // 2599402321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeatMapBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__SpawnedActor = { "_SpawnedActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeatMapBase, _SpawnedActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AHeatMapLocation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SpawnedActor_MetaData), NewProp__SpawnedActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__timerReset = { "_timerReset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeatMapBase, _timerReset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__timerReset_MetaData), NewProp__timerReset_MetaData) };
void Z_Construct_UClass_UHeatMapBase_Statics::NewProp__drawHeatMap_SetBit(void* Obj)
{
	((UHeatMapBase*)Obj)->_drawHeatMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__drawHeatMap = { "_drawHeatMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeatMapBase), &Z_Construct_UClass_UHeatMapBase_Statics::NewProp__drawHeatMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__drawHeatMap_MetaData), NewProp__drawHeatMap_MetaData) };
void Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataStoring_SetBit(void* Obj)
{
	((UHeatMapBase*)Obj)->_EnableDataStoring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataStoring = { "_EnableDataStoring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeatMapBase), &Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataStoring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__EnableDataStoring_MetaData), NewProp__EnableDataStoring_MetaData) };
void Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataReading_SetBit(void* Obj)
{
	((UHeatMapBase*)Obj)->_EnableDataReading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataReading = { "_EnableDataReading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeatMapBase), &Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataReading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__EnableDataReading_MetaData), NewProp__EnableDataReading_MetaData) };
void Z_Construct_UClass_UHeatMapBase_Statics::NewProp__AppendData_SetBit(void* Obj)
{
	((UHeatMapBase*)Obj)->_AppendData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__AppendData = { "_AppendData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeatMapBase), &Z_Construct_UClass_UHeatMapBase_Statics::NewProp__AppendData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AppendData_MetaData), NewProp__AppendData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__dataFileName = { "_dataFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeatMapBase, _dataFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__dataFileName_MetaData), NewProp__dataFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeatMapBase_Statics::NewProp__renderOffset = { "_renderOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeatMapBase, _renderOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__renderOffset_MetaData), NewProp__renderOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeatMapBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__timerReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__drawHeatMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataStoring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__EnableDataReading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__AppendData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__dataFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeatMapBase_Statics::NewProp__renderOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeatMapBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeatMapBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeatMapBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeatMapBase_Statics::ClassParams = {
	&UHeatMapBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeatMapBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeatMapBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeatMapBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeatMapBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeatMapBase()
{
	if (!Z_Registration_Info_UClass_UHeatMapBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeatMapBase.OuterSingleton, Z_Construct_UClass_UHeatMapBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeatMapBase.OuterSingleton;
}
template<> SIMPLETELEM_API UClass* StaticClass<UHeatMapBase>()
{
	return UHeatMapBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeatMapBase);
UHeatMapBase::~UHeatMapBase() {}
// End Class UHeatMapBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHeatData::StaticStruct, Z_Construct_UScriptStruct_FHeatData_Statics::NewStructOps, TEXT("HeatData"), &Z_Registration_Info_UScriptStruct_HeatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeatData), 3800988280U) },
		{ FHeatDrawData::StaticStruct, Z_Construct_UScriptStruct_FHeatDrawData_Statics::NewStructOps, TEXT("HeatDrawData"), &Z_Registration_Info_UScriptStruct_HeatDrawData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeatDrawData), 2060880893U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeatMapBase, UHeatMapBase::StaticClass, TEXT("UHeatMapBase"), &Z_Registration_Info_UClass_UHeatMapBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeatMapBase), 3307038681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_2489539218(TEXT("/Script/SimpleTelem"),
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Telemetry_HeatMapBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
