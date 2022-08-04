// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	//Some variables for ticks (information in up here!) and for locking controller rotation
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Pointers for character Movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 450.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	//Creation of the camera and attach to the rootComponent AKA: Capsule Component
	ThaCamera = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThaCamera"));
	ThaCamera->SetupAttachment(RootComponent);

	//Camera Properties
	ThaCamera->TargetArmLength = 300.0f;
	ThaCamera->bUsePawnControlRotation = true;

	//Camera properties creation and attach to the Camera
	CameraFollow = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFollow"));
	CameraFollow->SetupAttachment(ThaCamera, USpringArmComponent::SocketName);
	CameraFollow->bUsePawnControlRotation = false;

	isDead = false;
	Hunger = 100.0f;
}

void AMainCharacter::MoveFoward(float Axis)
{
	if (!isDead) {
		//Rotate the character
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

		//Move the character in the X Axis
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Axis);
	}
}

void AMainCharacter::MoveRight(float Axis)
{
	if (!isDead) {
		//Rotate the character
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

		//Move the character in the Y Axis
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Axis);
	}
}


// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMainCharacter::OnBeginOverlap);

	if (Game_UI_Widget_Class != nullptr) {
		Game_UI_Widget = CreateWidget(GetWorld(), Game_UI_Widget_Class);
		Game_UI_Widget->AddToViewport();
	}
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Hunger -= DeltaTime * Hunger_Treshold;

	if (Hunger <= 0 && !isDead) {
		isDead = true;

		GetMesh()->SetSimulatePhysics(true);
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMainCharacter::RestartGame, 3.0f, false);
		
	}
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	//Move the camera
	PlayerInputComponent->BindAxis("CameraX", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("CameraY", this, &APawn::AddControllerPitchInput);

	//Jump the character
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Move the character
	PlayerInputComponent->BindAxis("MoveX", this, &AMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("MoveY", this, &AMainCharacter::MoveFoward);
}

void AMainCharacter::RestartGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()),false);
}

void AMainCharacter::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Food")) {
			Hunger += 10.0f;
			
			if (Hunger > 100.0f) {
				Hunger = 100.0f;
			}

			OtherActor->Destroy();
		
	}
}
