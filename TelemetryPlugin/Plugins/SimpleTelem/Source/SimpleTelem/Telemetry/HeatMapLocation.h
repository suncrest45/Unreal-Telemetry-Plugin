// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeatMapLocation.generated.h"

UCLASS()
class SIMPLETELEM_API AHeatMapLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeatMapLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "HeatMaps", meta = (ForceAsFunction))
  void UpdateColor(int inputCount);

  UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category="HeatMap")
  float count;
  UPROPERTY(EditInstanceOnly,BlueprintReadOnly,  Category="HeatMap")
  float maxCount;
  UPROPERTY(VisibleAnywhere,BlueprintReadWrite,  Category="HeatMap")
  int id;

};
