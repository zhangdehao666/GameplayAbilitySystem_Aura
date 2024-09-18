// Copyright DeHao Zhang


#include "Player/AuraPlayerState.h"

AAuraPlayerState::AAuraPlayerState()
{
	// 服务器尝试更新客户端的频率
	NetUpdateFrequency = 100.f;
}
