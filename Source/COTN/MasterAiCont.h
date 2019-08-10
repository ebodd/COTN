// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MasterAiCont.generated.h"

/**
 * 
 */
UCLASS()
class COTN_API AMasterAiCont : public AAIController
{
	GENERATED_BODY()

private:

	UPROPERTY(BlueprintEditable)
	double Health, MoveSpeed, AttackSpeed, AttackDamage, Armour, Courage; //maybe change to int

	UPROPERTY(BlueprintEditable)
	bool IsRaisable, IsFearless, IsCloseCombat, CanDropTreasure, CanHide, CanStun, HeroStun, CanSummon;

	UPROPERTY(BlueprintReadOnly)
	void TakeDamage(double);
	void Death(); //may change to float for death time response to game mode
	void Runaway();
	void Stomp();
	void ConeAttack();
	void Summon();
	void SeeHiddenUnits();
	void ChargeAttack();
	void TargetStun();

	
};
