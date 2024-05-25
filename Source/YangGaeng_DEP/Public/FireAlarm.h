// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractBase.h"
#include "FireAlarm.generated.h"

/**
 * 
 */
UCLASS()
class YANGGAENG_DEP_API AFireAlarm : public AInteractBase
{
	GENERATED_BODY()
	
public:

	AFireAlarm();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:

	UPROPERTY(VisibleAnywhere, Category = "FireAlarm")
	UStaticMeshComponent* SM_FireAlarm;

	UPROPERTY(VisibleAnywhere, Category = "FireAlarm")
	UAudioComponent* AlarmAudio;
	
};