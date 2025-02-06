// Fill out your copyright notice in the Description page of Project Settings.


#include "WriteToFile.h"
#include "Kismet/GameplayStatics.h" // FDateTime::Now

void UWriteToFile::WriteToFile(const FString& FileName, const FString& Headers, const FString& Values, const bool bMinuteStamp,
	const bool bAppend, const FString Separator, const FString FileType)
{
	// Get the time
	const FDateTime CurrentTime = FDateTime::Now();
	const FString Month_Directory = FString::FromInt(CurrentTime.GetMonth()) + "/";
	const FString Day_Directory = FString::FromInt(CurrentTime.GetDay()) + "/";
	const FString Min_Directory = FString::FromInt(CurrentTime.GetMinute());

	// Construct the file path for the telemetry output
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir()) + "/Telemetry/" + Month_Directory + Day_Directory +(FileName + Min_Directory + FileType);
	
	if (bMinuteStamp)
	{
		FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir()) + "/Telemetry/" + Month_Directory + Day_Directory +(FileName + Min_Directory + FileType);
	}

#if WITH_EDITOR
	FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectConfigDir()) + "/Telemetry/" + Month_Directory + Day_Directory +(FileName + FileType);
#endif

	// If the file already exists, and we are appending, just write the values
	if (bAppend && FPaths::FileExists(FilePath))
	{
		// Append data to an existing file
		FFileHelper::SaveStringToFile(Values, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
	}
	else
	{
		FFileHelper::SaveStringToFile(Headers + Values, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get());
	}
}
