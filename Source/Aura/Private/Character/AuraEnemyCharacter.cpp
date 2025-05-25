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
	
}

void AAuraEnemyCharacter::UnhighlightActor()
{
	
}

void AAuraEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}
