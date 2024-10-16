// Copyright DeHao Zhang


#include "UI/ViewModel/MVVM_LoadSlot.h"

void UMVVM_LoadSlot::InitializeSlot()
{
	// TODO: Check slot status based on loaded data
	SetWidgetSwitcherIndex.Broadcast(2);
}

void UMVVM_LoadSlot::SetPlayerName(FString InPlayerName)
{
	// 会报错，不影响运行
	UE_MVVM_SET_PROPERTY_VALUE(PlayerName, InPlayerName);
}