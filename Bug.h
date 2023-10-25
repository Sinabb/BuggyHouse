#pragma once
#include "Actor.h"
class Bug : public Actor
{
	// 화면 테두리에서 등장
	// 일정 방향 이동
	// 45도 단위로 전환
public:
	Bug(D2DFramework* pFramework);
	virtual void Draw() override;
};

