// Fill out your copyright notice in the Description page of Project Settings.


#include "PositionReporter.h"
#include "Gameframework/Actor.h"

// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();
	
	
	UE_LOG(LogTemp, Warning, TEXT(" %s is in a location of %s "), *ObjectName, *ObjectPos);
}


// Called every frame
void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

