// Fill out your copyright notice in the Description page of Project Settings.
#include "HeatMapBase.h"
#include "HeatMapLocation.h"
#include "Math/Quat.h"
bool Near(FVector a, FVector b)
{
  if (!FMath::IsNearlyEqual(a.X, b.X))
    return false;
  if (!FMath::IsNearlyEqual(a.Y, b.Y))
    return false;
  if (!FMath::IsNearlyEqual(a.Z, b.Z))
    return false;
  return true;
}

// Sets default values for this component's properties
UHeatMapBase::UHeatMapBase()
{
  // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
  // off to improve performance if you don't need them.
  PrimaryComponentTick.bCanEverTick = true;

  // ...
}

// Called when the game starts
void UHeatMapBase::BeginPlay()
{
  Super::BeginPlay();
 /* if(this->_SpawnedActor == nullptr){
    if(GEngine){
      GEngine->AddOnScreenDebugMessage(-1, 100, FColor(255,0,0,255), "Actor to be spawned is NULL. Heat map will not be rendered.");
    }
  }*/
  // ...
}

void UHeatMapBase::EndPlay(const EEndPlayReason::Type _)
{
  FString file = FPaths::ProjectConfigDir();
  file.Append(*("Telemetry/" + _dataFileName));
  FString data = FString();
  for (auto const &dat : _heatMapData)
  {
    FString datString = FString::Printf(TEXT("%f,%f,%f,%f,%f,%f\n"), dat.pos.X, dat.pos.Y, dat.pos.Z, dat.rot.X, dat.rot.Y, dat.rot.Z);
    data.Append(datString);
  }
  // We will use this FileManager to deal with the file.
  IPlatformFile &FileManager = FPlatformFileManager::Get().GetPlatformFile();

  if (FileManager.CreateDirectoryTree(TEXT("Telemetry")))
  {
    // Always first check if the file that you want to manipulate exist.
    // We use the LoadFileToString to load the file into
    if (FFileHelper::SaveStringToFile(data, *file))
    {
      // UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Text From File: %s"), *data);
    }
    else
    {
      UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Did not load text from file"));
    }
  }
}

void UHeatMapBase::ToggleHeatMap()
{
  _drawHeatMap = !_drawHeatMap;
  if (_drawHeatMap == false)
  {
    _drawnHeatMapData.Empty();
    for(auto& actr : _locations){
      actr->Destroy();
    }
    _locations.Empty();
    return;
  }
  if(_EnableDataReading == false) return;
  FString file = FPaths::ProjectConfigDir();
  file.Append(*("Telemetry/" + _dataFileName));
  // We will use this FileManager to deal with the file.
  IPlatformFile &FileManager = FPlatformFileManager::Get().GetPlatformFile();
  TArray<FString> Result;
  if (FileManager.DirectoryExists(TEXT("Telemetry")))
  {
    if (FileManager.FileExists(*file))
    {
      // Always first check if the file that you want to manipulate exist.
      // We use the LoadFileToString to load the file into
      if (FFileHelper::LoadFileToStringArray(Result, *file))
      {
        // UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Loaded Data"));
      }
      else
      {
        // UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Did not load text from file"));
      }
    }
  }
  for (auto &line : Result)
  {
    FHeatData dat;
    FVector pos, rot;
    TArray<FString> vals;
    line.ParseIntoArray(vals, TEXT(","), true);
    if (vals.Num() == 6)
    {
      pos.X = FCString::Atof(*vals[0]);
      pos.Y = FCString::Atof(*vals[1]);
      pos.Z = FCString::Atof(*vals[2]);
      rot.X = FCString::Atof(*vals[3]);
      rot.Y = FCString::Atof(*vals[4]);
      rot.Z = FCString::Atof(*vals[5]);
      dat.pos = pos;
      dat.rot = rot;
      _heatMapData.Add(dat);
      if (_drawHeatMap)
      {
        for (auto &d : _drawnHeatMapData)
        {
          if (Near(d.data.pos, dat.pos))
          {
            d.seenCount++;
            continue;
          }
        }
        _drawnHeatMapData.Add(FHeatDrawData{.seenCount = 1, .data = dat});
        // UE_LOG(LogTemp, Warning, TEXT("%s\n"), *line);
      }
    }
  }
}

void UHeatMapBase::LoadHeatMap() {
  if(_EnableDataReading == false) return;
  FString file = FPaths::ProjectConfigDir();
  file.Append(*("Telemetry/" + _dataFileName));
  // We will use this FileManager to deal with the file.
  IPlatformFile &FileManager = FPlatformFileManager::Get().GetPlatformFile();
  TArray<FString> Result;
  if (FileManager.DirectoryExists(TEXT("Telemetry")))
  {
    if (FileManager.FileExists(*file))
    {
      // Always first check if the file that you want to manipulate exist.
      // We use the LoadFileToString to load the file into
      if (FFileHelper::LoadFileToStringArray(Result, *file))
      {
        // UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Loaded Data"));
      }
      else
      {
        // UE_LOG(LogTemp, Warning, TEXT("FileManipulation: Did not load text from file"));
      }
    }
  }
  for (auto &line : Result)
  {
    FHeatData dat;
    FVector pos, rot;
    TArray<FString> vals;
    line.ParseIntoArray(vals, TEXT(","), true);
    if (vals.Num() == 6)
    {
      pos.X = FCString::Atof(*vals[0]);
      pos.Y = FCString::Atof(*vals[1]);
      pos.Z = FCString::Atof(*vals[2]);
      rot.X = FCString::Atof(*vals[3]);
      rot.Y = FCString::Atof(*vals[4]);
      rot.Z = FCString::Atof(*vals[5]);
      dat.pos = pos;
      dat.rot = rot;
      _heatMapData.Add(dat);
      if (_drawHeatMap)
      {
        for (auto &d : _drawnHeatMapData)
        {
          if (Near(d.data.pos, dat.pos))
          {
            d.seenCount++;
            continue;
          }
        }
        _drawnHeatMapData.Add(FHeatDrawData{.seenCount = 1, .data = dat});
        // UE_LOG(LogTemp, Warning, TEXT("%s\n"), *line);
      }
    }
  }
}

void UHeatMapBase::ToggleStorage()
{
  _EnableDataStoring = !_EnableDataStoring;
  if(_AppendData == false){
    _drawnHeatMapData.Reset();
    _heatMapData.Reset();
    for(auto& actr : _locations){
      actr->Destroy();
    }
    _locations.Empty();
    return;
  }
}

void UHeatMapBase::ToggleReading() {
  _EnableDataReading = !_EnableDataReading;
    if(_AppendData == false){
    _drawnHeatMapData.Reset();
    _heatMapData.Reset();
    for(auto& actr : _locations){
      actr->Destroy();
    }
    _locations.Empty();
    return;
  }
}

void UHeatMapBase::AddHeatData(FVector Position, FVector Rotation)
{
  if(_EnableDataStoring == false) return;
  Position.X = FMath::RoundHalfToZero(Position.X);
  Position.Y = FMath::RoundHalfToZero(Position.Y);
  Position.Z = FMath::RoundHalfToZero(Position.Z);
  Rotation.X = FMath::RoundHalfToZero(Rotation.X * 100) / 100;
  Rotation.Y = FMath::RoundHalfToZero(Rotation.Y * 100) / 100;
  Rotation.Z = FMath::RoundHalfToZero(Rotation.Z * 100) / 100;

  // Calculate heat value based on position and rotation
  _heatMapData.Add(FHeatData{.pos = Position, .rot = Rotation});
  if (_drawHeatMap)
  {
    for (auto &d : _drawnHeatMapData)
    {
      if (Near(d.data.pos, Position))
      {
        d.seenCount++;
        return;
      }
    }

    _drawnHeatMapData.Add(FHeatDrawData{.seenCount = 1, .data = FHeatData{.pos = Position, .rot = Rotation}});
    // UE_LOG(LogTemp, Warning, TEXT("%f,%f,%f,%f,%f,%f\n"), Position.X, Position.Y, Position.Z, Rotation.X, Rotation.Y, Rotation.Z);
  }
}

// Called every frame
void UHeatMapBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
  _updateTimer -= DeltaTime;
  if (_updateTimer <= 0)
  {
    _updateTimer = _timerReset;
    if(updateActors){
      UpdateDraw();

    }
  }
  // ...
}

void UHeatMapBase::UpdateDraw()
{
  if(_drawHeatMap == false){
    return;
  }
  UE_LOG(LogTemp, Warning, TEXT("UpdateDraw"));
  _drawnHeatMapData.Reset();
  for (auto dat : _heatMapData)
  {
    bool found = false;
    for (auto &d : _drawnHeatMapData)
    {
      if (Near(d.data.pos, dat.pos) )
      {
        d.seenCount++;
        found = true;
        break;
      }
    }
    if(found == true){ continue;}
    _drawnHeatMapData.Add(FHeatDrawData{.seenCount = 1, .data = dat});
  }

  const size_t count = _drawnHeatMapData.Num();
  UE_LOG(LogTemp, Warning, TEXT("Count %d"), count);
  int largest = 0;
  for (auto &d : _drawnHeatMapData)
  {
    if(d.seenCount > largest){
      largest = d.seenCount;
    }
  }
  
  for(auto const &d : _drawnHeatMapData){
    bool good = false;
    for(auto &a : _locations){
      FVector p = a->GetActorLocation();
      FVector r = FQuat::MakeFromRotator(a->GetActorRotation()).Euler();
      if(Near(d.data.pos, p)) {
        // a->count = d.seenCount;
        UE_LOG(LogTemp, Warning, TEXT("%f"), a->count);
        a->maxCount = largest;
        good = true;
        a->UpdateColor(d.seenCount);
        // UE_LOG(LogTemp, Warning, TEXT("Valid Actor"));
        break;
      }
    }
    if(good == true) {
      continue;
    }
    AHeatMapLocation* newest = GetWorld()->SpawnActor<AHeatMapLocation>(_SpawnedActor.Get(), d.data.pos + _renderOffset, FQuat::MakeFromEuler(FVector(0,0,0)).Rotator(), FActorSpawnParameters{});
    if(newest == nullptr) return;
    newest->id = _locations.Num();
    _locations.Add(newest);
    newest->count = d.seenCount;
    newest->maxCount = largest;
    // UE_LOG(LogTemp, Warning, TEXT("Spawning actor"));
    newest->UpdateColor(d.seenCount);

  }
  if(_EnableDataStoring == false){
    updateActors = false;
  }

}
