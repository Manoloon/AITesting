// Fill out your copyright notice in the Description page of Project Settings.


#include "Spectral.h"

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASpectral::ASpectral()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->DefaultLandMovementMode=MOVE_Flying;
}

// Called when the game starts or when spawned
void ASpectral::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpectral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpectral::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

