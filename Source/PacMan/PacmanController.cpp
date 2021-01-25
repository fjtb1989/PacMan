// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanController.h"
#include "PacmanPawn.h"

APacmanPawn* APacmanController::GetPacmanPawn() const
{
	return Cast<APacmanPawn>(GetPawn());
}

void APacmanController::SetupInputComponent()
{

}

void APacmanController::MoveUp()
{
}

void APacmanController::MoveDown()
{
}

void APacmanController::MoveLeft()
{
}

void APacmanController::MoveRight()
{
}
