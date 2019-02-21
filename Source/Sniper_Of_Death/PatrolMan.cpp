// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolMan.h"

// Sets default values
APatrolMan::APatrolMan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatrolMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatrolMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float t = GetGameTimeSinceCreation();
	UE_LOG(LogTemp, Warning, TEXT("Game Time: %f"), t);

	FVector p = GetActorLocation();
	p.Y = sin(t) * 1000.f;

	SetActorLocation(p);
}