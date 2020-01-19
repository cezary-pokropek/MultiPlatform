// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"

bool UMainMenu::Initialize()
{
	bool Succes = Super::Initialize();
	if (!Succes) { return false; }

	if (!ensure(Host != nullptr)) return false;
	Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	return true;
}

void UMainMenu::HostServer()
{
	//UE_LOG(LogTemp, Warning, TEXT("Hosting a server!"));

	if (MenuInterface != nullptr)
	{
		MenuInterface->Host();
	}
}

void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
	this->MenuInterface = MenuInterface;
}