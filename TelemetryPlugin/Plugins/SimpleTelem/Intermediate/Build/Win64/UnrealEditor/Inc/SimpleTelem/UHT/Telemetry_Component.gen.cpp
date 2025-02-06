// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTelem/Data_Recording/Telemetry_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelemetry_Component() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SIMPLETELEM_API UClass* Z_Construct_UClass_UTelemetry_Component();
SIMPLETELEM_API UClass* Z_Construct_UClass_UTelemetry_Component_NoRegister();
SIMPLETELEM_API UEnum* Z_Construct_UEnum_SimpleTelem_EKeyTpe();
UPackage* Z_Construct_UPackage__Script_SimpleTelem();
// End Cross Module References

// Begin Enum EKeyTpe
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeyTpe;
static UEnum* EKeyTpe_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKeyTpe.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKeyTpe.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleTelem_EKeyTpe, (UObject*)Z_Construct_UPackage__Script_SimpleTelem(), TEXT("EKeyTpe"));
	}
	return Z_Registration_Info_UEnum_EKeyTpe.OuterSingleton;
}
template<> SIMPLETELEM_API UEnum* StaticEnum<EKeyTpe>()
{
	return EKeyTpe_StaticEnum();
}
struct Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An enum allowing to us to know what type a blackboard key is\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enum allowing to us to know what type a blackboard key is" },
#endif
		{ "Type_Bool.Name", "Type_Bool" },
		{ "Type_Enum.Name", "Type_Enum" },
		{ "Type_Float.Name", "Type_Float" },
		{ "Type_Int.Name", "Type_Int" },
		{ "Type_Name.Name", "Type_Name" },
		{ "Type_Rotator.Name", "Type_Rotator" },
		{ "Type_String.Name", "Type_String" },
		{ "Type_Unknown.Name", "Type_Unknown" },
		{ "Type_Vector.Name", "Type_Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Type_Unknown", (int64)Type_Unknown },
		{ "Type_Int", (int64)Type_Int },
		{ "Type_Float", (int64)Type_Float },
		{ "Type_String", (int64)Type_String },
		{ "Type_Bool", (int64)Type_Bool },
		{ "Type_Enum", (int64)Type_Enum },
		{ "Type_Vector", (int64)Type_Vector },
		{ "Type_Rotator", (int64)Type_Rotator },
		{ "Type_Name", (int64)Type_Name },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleTelem,
	nullptr,
	"EKeyTpe",
	"EKeyTpe",
	Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleTelem_EKeyTpe()
{
	if (!Z_Registration_Info_UEnum_EKeyTpe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeyTpe.InnerSingleton, Z_Construct_UEnum_SimpleTelem_EKeyTpe_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKeyTpe.InnerSingleton;
}
// End Enum EKeyTpe

// Begin Class UTelemetry_Component Function AddTrackersAsBool
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics
{
	struct Telemetry_Component_eventAddTrackersAsBool_Parms
	{
		FString Key;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Add a key to the blackboard as a boolean\n/// @param Key\x09 - The key we want to add to the blackboard \n/// @param Value - The value of the key we want to add\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Add a key to the blackboard as a boolean\n@param Key     - The key we want to add to the blackboard\n@param Value - The value of the key we want to add" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsBool_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Value_SetBit(void* Obj)
{
	((Telemetry_Component_eventAddTrackersAsBool_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Telemetry_Component_eventAddTrackersAsBool_Parms), &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsBool", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::Telemetry_Component_eventAddTrackersAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::Telemetry_Component_eventAddTrackersAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsBool)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsBool(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsBool

// Begin Class UTelemetry_Component Function AddTrackersAsFloat
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics
{
	struct Telemetry_Component_eventAddTrackersAsFloat_Parms
	{
		FString Key;
		bool CompoundAssignment;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Add a key to the blackboard as a float\n/// @param Key\x09\x09\x09\x09  - The key we want to add to the blackboard\n/// @param CompoundAssignment - Add the value to the value being stored\n/// @param Value\x09\x09\x09  - The value of the key we want to add\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Add a key to the blackboard as a float\n@param Key                              - The key we want to add to the blackboard\n@param CompoundAssignment - Add the value to the value being stored\n@param Value                    - The value of the key we want to add" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_CompoundAssignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompoundAssignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_CompoundAssignment_SetBit(void* Obj)
{
	((Telemetry_Component_eventAddTrackersAsFloat_Parms*)Obj)->CompoundAssignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_CompoundAssignment = { "CompoundAssignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Telemetry_Component_eventAddTrackersAsFloat_Parms), &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_CompoundAssignment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_CompoundAssignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsFloat", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::Telemetry_Component_eventAddTrackersAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::Telemetry_Component_eventAddTrackersAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_CompoundAssignment);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsFloat(Z_Param_Key,Z_Param_CompoundAssignment,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsFloat

// Begin Class UTelemetry_Component Function AddTrackersAsInt
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics
{
	struct Telemetry_Component_eventAddTrackersAsInt_Parms
	{
		FString Key;
		bool CompoundAssignment;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Add a key to the blackboard as an integer\n/// @param Key\x09\x09\x09\x09  - The key we want to add to the blackboard\n/// @param CompoundAssignment - Add the value to the value being stored\n/// @param Value\x09\x09\x09  - The value of the key we want to add\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Add a key to the blackboard as an integer\n@param Key                              - The key we want to add to the blackboard\n@param CompoundAssignment - Add the value to the value being stored\n@param Value                    - The value of the key we want to add" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_CompoundAssignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CompoundAssignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_CompoundAssignment_SetBit(void* Obj)
{
	((Telemetry_Component_eventAddTrackersAsInt_Parms*)Obj)->CompoundAssignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_CompoundAssignment = { "CompoundAssignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Telemetry_Component_eventAddTrackersAsInt_Parms), &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_CompoundAssignment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_CompoundAssignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsInt", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::Telemetry_Component_eventAddTrackersAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::Telemetry_Component_eventAddTrackersAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_CompoundAssignment);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsInt(Z_Param_Key,Z_Param_CompoundAssignment,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsInt

// Begin Class UTelemetry_Component Function AddTrackersAsName
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics
{
	struct Telemetry_Component_eventAddTrackersAsName_Parms
	{
		FString Key;
		FName Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Update a FName key in the blackboard\n/// @param Key - The name of the FName variable we are tracking\n/// @param Value - The FName we are tracking\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update a FName key in the blackboard\n@param Key - The name of the FName variable we are tracking\n@param Value - The FName we are tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsName_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsName_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsName", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::Telemetry_Component_eventAddTrackersAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::Telemetry_Component_eventAddTrackersAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsName(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsName

// Begin Class UTelemetry_Component Function AddTrackersAsRotator
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics
{
	struct Telemetry_Component_eventAddTrackersAsRotator_Parms
	{
		FString Key;
		FRotator Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsRotator_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsRotator", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::Telemetry_Component_eventAddTrackersAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::Telemetry_Component_eventAddTrackersAsRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsRotator)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsRotator(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsRotator

// Begin Class UTelemetry_Component Function AddTrackersAsString
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics
{
	struct Telemetry_Component_eventAddTrackersAsString_Parms
	{
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Add a key to the blackboard as a string\n/// @param Key\x09 - The key we want to add to the blackboard \n/// @param Value - The value of the key we want to add\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Add a key to the blackboard as a string\n@param Key     - The key we want to add to the blackboard\n@param Value - The value of the key we want to add" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsString_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsString_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsString", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::Telemetry_Component_eventAddTrackersAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::Telemetry_Component_eventAddTrackersAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsString(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsString

// Begin Class UTelemetry_Component Function AddTrackersAsVector
struct Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics
{
	struct Telemetry_Component_eventAddTrackersAsVector_Parms
	{
		FString Key;
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Update a vector in the telemetry blackboard\n/// @param Key   - The name of the vector we are tracking\n/// @param Value - The actual vector we are tracking\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Update a vector in the telemetry blackboard\n@param Key   - The name of the vector we are tracking\n@param Value - The actual vector we are tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsVector_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventAddTrackersAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "AddTrackersAsVector", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::Telemetry_Component_eventAddTrackersAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::Telemetry_Component_eventAddTrackersAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execAddTrackersAsVector)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackersAsVector(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function AddTrackersAsVector

// Begin Class UTelemetry_Component Function ConcatenateKeysAndValues
struct Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Converts the keys in the blackboard to a string\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Converts the keys in the blackboard to a string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "ConcatenateKeysAndValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execConcatenateKeysAndValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConcatenateKeysAndValues();
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function ConcatenateKeysAndValues

// Begin Class UTelemetry_Component Function DisplayTelemetry
struct Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Prints the current telemetry data to the screen\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Prints the current telemetry data to the screen" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "DisplayTelemetry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execDisplayTelemetry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayTelemetry();
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function DisplayTelemetry

// Begin Class UTelemetry_Component Function GetHeadersString
struct Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics
{
	struct Telemetry_Component_eventGetHeadersString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Gets the headers string\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the headers string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventGetHeadersString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "GetHeadersString", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::Telemetry_Component_eventGetHeadersString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::Telemetry_Component_eventGetHeadersString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_GetHeadersString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_GetHeadersString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execGetHeadersString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetHeadersString();
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function GetHeadersString

// Begin Class UTelemetry_Component Function GetValuesString
struct Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics
{
	struct Telemetry_Component_eventGetValuesString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Telemetry_Component_eventGetValuesString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "GetValuesString", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::Telemetry_Component_eventGetValuesString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::Telemetry_Component_eventGetValuesString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_GetValuesString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_GetValuesString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execGetValuesString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetValuesString();
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function GetValuesString

// Begin Class UTelemetry_Component Function PrintTelemetry
struct Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics
{
	struct Telemetry_Component_eventPrintTelemetry_Parms
	{
		bool Append;
		bool MinuteStamp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @brief Prints telemetry data to a CSV\n/// @param Append\x09   - Overwrite or add to the file\n/// @param MinuteStamp - Do or do not minute stamp the CSV file\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Prints telemetry data to a CSV\n@param Append    - Overwrite or add to the file\n@param MinuteStamp - Do or do not minute stamp the CSV file" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Append_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Append;
	static void NewProp_MinuteStamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MinuteStamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_Append_SetBit(void* Obj)
{
	((Telemetry_Component_eventPrintTelemetry_Parms*)Obj)->Append = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Telemetry_Component_eventPrintTelemetry_Parms), &Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_Append_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_MinuteStamp_SetBit(void* Obj)
{
	((Telemetry_Component_eventPrintTelemetry_Parms*)Obj)->MinuteStamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_MinuteStamp = { "MinuteStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Telemetry_Component_eventPrintTelemetry_Parms), &Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_MinuteStamp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_Append,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::NewProp_MinuteStamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTelemetry_Component, nullptr, "PrintTelemetry", nullptr, nullptr, Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::Telemetry_Component_eventPrintTelemetry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::Telemetry_Component_eventPrintTelemetry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelemetry_Component::execPrintTelemetry)
{
	P_GET_UBOOL(Z_Param_Append);
	P_GET_UBOOL(Z_Param_MinuteStamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintTelemetry(Z_Param_Append,Z_Param_MinuteStamp);
	P_NATIVE_END;
}
// End Class UTelemetry_Component Function PrintTelemetry

// Begin Class UTelemetry_Component
void UTelemetry_Component::StaticRegisterNativesUTelemetry_Component()
{
	UClass* Class = UTelemetry_Component::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTrackersAsBool", &UTelemetry_Component::execAddTrackersAsBool },
		{ "AddTrackersAsFloat", &UTelemetry_Component::execAddTrackersAsFloat },
		{ "AddTrackersAsInt", &UTelemetry_Component::execAddTrackersAsInt },
		{ "AddTrackersAsName", &UTelemetry_Component::execAddTrackersAsName },
		{ "AddTrackersAsRotator", &UTelemetry_Component::execAddTrackersAsRotator },
		{ "AddTrackersAsString", &UTelemetry_Component::execAddTrackersAsString },
		{ "AddTrackersAsVector", &UTelemetry_Component::execAddTrackersAsVector },
		{ "ConcatenateKeysAndValues", &UTelemetry_Component::execConcatenateKeysAndValues },
		{ "DisplayTelemetry", &UTelemetry_Component::execDisplayTelemetry },
		{ "GetHeadersString", &UTelemetry_Component::execGetHeadersString },
		{ "GetValuesString", &UTelemetry_Component::execGetValuesString },
		{ "PrintTelemetry", &UTelemetry_Component::execPrintTelemetry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTelemetry_Component);
UClass* Z_Construct_UClass_UTelemetry_Component_NoRegister()
{
	return UTelemetry_Component::StaticClass();
}
struct Z_Construct_UClass_UTelemetry_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "Data_Recording/Telemetry_Component.h" },
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the file to write to\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the file to write to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "Telemetry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For Unreal Data Table importing\n" },
#endif
		{ "ModuleRelativePath", "Data_Recording/Telemetry_Component.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For Unreal Data Table importing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsBool, "AddTrackersAsBool" }, // 3432450222
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsFloat, "AddTrackersAsFloat" }, // 473157733
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsInt, "AddTrackersAsInt" }, // 2089919844
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsName, "AddTrackersAsName" }, // 1032047693
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsRotator, "AddTrackersAsRotator" }, // 362843399
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsString, "AddTrackersAsString" }, // 3825732452
		{ &Z_Construct_UFunction_UTelemetry_Component_AddTrackersAsVector, "AddTrackersAsVector" }, // 2618550546
		{ &Z_Construct_UFunction_UTelemetry_Component_ConcatenateKeysAndValues, "ConcatenateKeysAndValues" }, // 3168097869
		{ &Z_Construct_UFunction_UTelemetry_Component_DisplayTelemetry, "DisplayTelemetry" }, // 1388584458
		{ &Z_Construct_UFunction_UTelemetry_Component_GetHeadersString, "GetHeadersString" }, // 642921653
		{ &Z_Construct_UFunction_UTelemetry_Component_GetValuesString, "GetValuesString" }, // 26261328
		{ &Z_Construct_UFunction_UTelemetry_Component_PrintTelemetry, "PrintTelemetry" }, // 1789559675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelemetry_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTelemetry_Component_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelemetry_Component, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTelemetry_Component_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelemetry_Component, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelemetry_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelemetry_Component_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelemetry_Component_Statics::NewProp_RowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelemetry_Component_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTelemetry_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelemetry_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTelemetry_Component_Statics::ClassParams = {
	&UTelemetry_Component::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTelemetry_Component_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTelemetry_Component_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTelemetry_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UTelemetry_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTelemetry_Component()
{
	if (!Z_Registration_Info_UClass_UTelemetry_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTelemetry_Component.OuterSingleton, Z_Construct_UClass_UTelemetry_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTelemetry_Component.OuterSingleton;
}
template<> SIMPLETELEM_API UClass* StaticClass<UTelemetry_Component>()
{
	return UTelemetry_Component::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTelemetry_Component);
UTelemetry_Component::~UTelemetry_Component() {}
// End Class UTelemetry_Component

// Begin Registration
struct Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKeyTpe_StaticEnum, TEXT("EKeyTpe"), &Z_Registration_Info_UEnum_EKeyTpe, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1320741826U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTelemetry_Component, UTelemetry_Component::StaticClass, TEXT("UTelemetry_Component"), &Z_Registration_Info_UClass_UTelemetry_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTelemetry_Component), 3570062334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_3143373570(TEXT("/Script/SimpleTelem"),
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Data_Recording_Telemetry_Component_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
