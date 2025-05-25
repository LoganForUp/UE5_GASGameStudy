#include "Character/AuraEnemyCharacter.h"

AAuraEnemyCharacter::AAuraEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraEnemyCharacter::HighlightActor()
{
	bHighlighted = true;	
}

void AAuraEnemyCharacter::UnhighlightActor()
{
	bHighlighted = false;
}

void AAuraEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}
