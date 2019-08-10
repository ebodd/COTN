// Copyright of Kraken Industries Limited


#include "MasterAiCharacter.h"

// Sets default values
AMasterAiCharacter::AMasterAiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMasterAiCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasterAiCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMasterAiCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

