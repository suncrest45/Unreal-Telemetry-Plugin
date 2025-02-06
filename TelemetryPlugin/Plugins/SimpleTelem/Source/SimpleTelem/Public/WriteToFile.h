// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WriteToFile.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLETELEM_API UWriteToFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/// Writes a string to .csv file
	/// @param FileName	    - The .CSV we are writing to
	/// @param Headers	    - The headers for the CSV
	/// @param Values	    - The values to populate the CSV rows
	/// @param bMinuteStamp - Minute stamp the CSV file or not
	/// @param bAppend	    - Should a new string be added to an existing file
	/// @param Separator    - Comma separated values
	/// @param FileType	    - The type of file to write
	UFUNCTION(BlueprintCallable, Category = "File I/O")
	static void WriteToFile(const FString& FileName, const FString& Headers, const FString& Values, const bool bMinuteStamp = false, const bool bAppend = true, const FString Separator = ",", const FString FileType = ".csv");
	
};
