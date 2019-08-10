// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterAiCont.h"

void AMasterAiCont::TakeDamage(double a)
{
	//get enmey attack 
	//get 'player' health 
	//get 'player' armour
	if (Health <= 0)
		Death();
	else if
		(Armour - AttackDamage) - Health;
		 //set new health
}

void AMasterAiCont::Death()
{
	//Play death anim
	//Spawn skeleton corpse class?
}



/* may be worth moving to a seperate normal unit class*/
void AMasterAiCont::Runaway()
{
	if (IsFearless = false && Courage <= 50)
		//Runaway
		;
	else 
		return;
}



/* May be worth moving to a child as a seperate hero classes*/

void AMasterAiCont::Stomp()
{
	//Logic for area of effect around character 
}

void AMasterAiCont::ConeAttack()
{
	// logic for cone damage effect 
	//canStun bool 
}

void AMasterAiCont::Summon()
{
	//unit amount
	//location of summon Target points or random
}

void AMasterAiCont::SeeHiddenUnits()
{
	if (CanHide = true)
		//cant see enemy 
		;
	else
		//enemy spotted
		;
}

void AMasterAiCont::ChargeAttack()
{
	// can stun ?
	//distance 
	//blocking objects handling
}

void AMasterAiCont::TargetStun()
{
	//Can be stunable?
	//can hero stun?
}
