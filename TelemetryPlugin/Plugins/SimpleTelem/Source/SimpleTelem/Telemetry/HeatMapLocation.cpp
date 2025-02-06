// Fill out your copyright notice in the Description page of Project Settings.


#include "HeatMapLocation.h"

// Sets default values
AHeatMapLocation::AHeatMapLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeatMapLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeatMapLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

  void AHeatMapLocation::UpdateColor_Implementation(int inputCount){

  }
