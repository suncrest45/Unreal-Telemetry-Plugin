// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineMinimal.h"
#include "Components/ActorComponent.h"
#include "HeatMapLocation.h"
#include "HeatMapBase.generated.h"



USTRUCT()
struct FHeatData{
	GENERATED_BODY()
  UPROPERTY()
  FVector pos = FVector::ZeroVector;
  UPROPERTY()
  FVector rot = FVector::ZeroVector;
};

USTRUCT()
struct FHeatDrawData{
	GENERATED_BODY()
  UPROPERTY()
  int seenCount = 0;
  FHeatData data = FHeatData();
};

UCLASS( ClassGroup=("Telemetry"), meta=(BlueprintSpawnableComponent) )
class SIMPLETELEM_API UHeatMapBase : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeatMapBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
  
  virtual void EndPlay(const EEndPlayReason::Type _) override;
public:	
  // Toggle heat map drawing
  UFUNCTION(BlueprintCallable, Category="Heat Mapping")
  void ToggleHeatMap();
    // Toggle heat map drawing
  UFUNCTION(BlueprintCallable, Category="Heat Mapping")
  void LoadHeatMap();
  // Toggle data storage
  // NOTE: THIS WILL CLEAR ALL CURRENT DATA
  UFUNCTION(BlueprintCallable, Category="Heat Mapping")
  void ToggleStorage();
  // Toggle data reading
  // NOTE: THIS WILL CLEAR ALL CURRENT DATA
  UFUNCTION(BlueprintCallable, Category="Heat Mapping")
  void ToggleReading();
  // Add heat data to the heat map
  UFUNCTION(BlueprintCallable, Category="Heat Mapping")
  void AddHeatData(FVector Position, FVector Rotation);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
  TArray<FHeatData> _heatMapData;
  FHeatDrawData _largest;
  TArray<FHeatDrawData> _drawnHeatMapData;
  TArray<AHeatMapLocation*> _locations;

  void UpdateDraw();
  float _updateTimer = 1.0f;
  bool updateActors = true;
public:	
  UPROPERTY(EditAnywhere, Category="HeatMap")
  TSubclassOf<AHeatMapLocation> _SpawnedActor;

  UPROPERTY(EditAnywhere, Category="HeatMap")
  float _timerReset = 1.0f;

  UPROPERTY(EditAnywhere, Category="HeatMap")
  bool _drawHeatMap = false;	

  UPROPERTY(EditAnywhere, Category="HeatMap")
  bool _EnableDataStoring = false;

  UPROPERTY(EditAnywhere, Category="HeatMap")
  bool _EnableDataReading  = false;
  
  UPROPERTY(EditAnywhere, Category="HeatMap")
  bool _AppendData = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HeatMap")
  FString _dataFileName = "DefaultHeatMap.dat";


  // If the origin of your blueprint is not at the bottom of it, use this to adjust where the heat map is rendered relative to your object
  UPROPERTY(EditAnywhere, Category="HeatMap")
  FVector _renderOffset = FVector(0,0,0);
};
