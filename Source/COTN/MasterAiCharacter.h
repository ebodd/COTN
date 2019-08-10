// Copyright of Kraken Industries Limited

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MasterAiCharacter.generated.h"

UCLASS()
class COTN_API AMasterAiCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMasterAiCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
