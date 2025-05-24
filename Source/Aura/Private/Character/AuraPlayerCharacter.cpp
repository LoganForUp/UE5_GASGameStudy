#include "Character/AuraPlayerCharacter.h"

#include "Components/SkeletalMeshComponent.h"

AAuraPlayerCharacter::AAuraPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}
