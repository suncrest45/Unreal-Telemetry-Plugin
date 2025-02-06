// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleTelem/Public/WriteToFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWriteToFile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SIMPLETELEM_API UClass* Z_Construct_UClass_UWriteToFile();
SIMPLETELEM_API UClass* Z_Construct_UClass_UWriteToFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleTelem();
// End Cross Module References

// Begin Class UWriteToFile Function WriteToFile
struct Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics
{
	struct WriteToFile_eventWriteToFile_Parms
	{
		FString FileName;
		FString Headers;
		FString Values;
		bool bMinuteStamp;
		bool bAppend;
		FString Separator;
		FString FileType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Writes a string to .csv file\n/// @param FileName\x09    - The .CSV we are writing to\n/// @param Headers\x09    - The headers for the CSV\n/// @param Values\x09    - The values to populate the CSV rows\n/// @param bMinuteStamp - Minute stamp the CSV file or not\n/// @param bAppend\x09    - Should a new string be added to an existing file\n/// @param Separator    - Comma separated values\n/// @param FileType\x09    - The type of file to write\n" },
#endif
		{ "CPP_Default_bAppend", "true" },
		{ "CPP_Default_bMinuteStamp", "false" },
		{ "CPP_Default_FileType", ".csv" },
		{ "CPP_Default_Separator", "," },
		{ "ModuleRelativePath", "Public/WriteToFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes a string to .csv file\n@param FileName           - The .CSV we are writing to\n@param Headers            - The headers for the CSV\n@param Values     - The values to populate the CSV rows\n@param bMinuteStamp - Minute stamp the CSV file or not\n@param bAppend            - Should a new string be added to an existing file\n@param Separator    - Comma separated values\n@param FileType           - The type of file to write" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMinuteStamp_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAppend_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Values;
	static void NewProp_bMinuteStamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMinuteStamp;
	static void NewProp_bAppend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WriteToFile_eventWriteToFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WriteToFile_eventWriteToFile_Parms, Headers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WriteToFile_eventWriteToFile_Parms, Values), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
void Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bMinuteStamp_SetBit(void* Obj)
{
	((WriteToFile_eventWriteToFile_Parms*)Obj)->bMinuteStamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bMinuteStamp = { "bMinuteStamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WriteToFile_eventWriteToFile_Parms), &Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bMinuteStamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMinuteStamp_MetaData), NewProp_bMinuteStamp_MetaData) };
void Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bAppend_SetBit(void* Obj)
{
	((WriteToFile_eventWriteToFile_Parms*)Obj)->bAppend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bAppend = { "bAppend", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WriteToFile_eventWriteToFile_Parms), &Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bAppend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAppend_MetaData), NewProp_bAppend_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WriteToFile_eventWriteToFile_Parms, Separator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separator_MetaData), NewProp_Separator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WriteToFile_eventWriteToFile_Parms, FileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileType_MetaData), NewProp_FileType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Headers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bMinuteStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_bAppend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_Separator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::NewProp_FileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWriteToFile, nullptr, "WriteToFile", nullptr, nullptr, Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::WriteToFile_eventWriteToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::WriteToFile_eventWriteToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWriteToFile_WriteToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWriteToFile_WriteToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWriteToFile::execWriteToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Headers);
	P_GET_PROPERTY(FStrProperty,Z_Param_Values);
	P_GET_UBOOL(Z_Param_bMinuteStamp);
	P_GET_UBOOL(Z_Param_bAppend);
	P_GET_PROPERTY(FStrProperty,Z_Param_Separator);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWriteToFile::WriteToFile(Z_Param_FileName,Z_Param_Headers,Z_Param_Values,Z_Param_bMinuteStamp,Z_Param_bAppend,Z_Param_Separator,Z_Param_FileType);
	P_NATIVE_END;
}
// End Class UWriteToFile Function WriteToFile

// Begin Class UWriteToFile
void UWriteToFile::StaticRegisterNativesUWriteToFile()
{
	UClass* Class = UWriteToFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WriteToFile", &UWriteToFile::execWriteToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWriteToFile);
UClass* Z_Construct_UClass_UWriteToFile_NoRegister()
{
	return UWriteToFile::StaticClass();
}
struct Z_Construct_UClass_UWriteToFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WriteToFile.h" },
		{ "ModuleRelativePath", "Public/WriteToFile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWriteToFile_WriteToFile, "WriteToFile" }, // 302913592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWriteToFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWriteToFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleTelem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWriteToFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWriteToFile_Statics::ClassParams = {
	&UWriteToFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWriteToFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UWriteToFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWriteToFile()
{
	if (!Z_Registration_Info_UClass_UWriteToFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWriteToFile.OuterSingleton, Z_Construct_UClass_UWriteToFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWriteToFile.OuterSingleton;
}
template<> SIMPLETELEM_API UClass* StaticClass<UWriteToFile>()
{
	return UWriteToFile::StaticClass();
}
UWriteToFile::UWriteToFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWriteToFile);
UWriteToFile::~UWriteToFile() {}
// End Class UWriteToFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWriteToFile, UWriteToFile::StaticClass, TEXT("UWriteToFile"), &Z_Registration_Info_UClass_UWriteToFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWriteToFile), 2288602019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_2426712374(TEXT("/Script/SimpleTelem"),
	Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TelemetryPlugin_Plugins_SimpleTelem_Source_SimpleTelem_Public_WriteToFile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
