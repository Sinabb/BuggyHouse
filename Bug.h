#pragma once
#include "Actor.h"
class Bug : public Actor
{
	// 화면 테두리에서 등장
	// 일정 방향 이동
	// 45도 단위로 전환
	enum class Direction
	{
		UP,
		UP_RIGHT,
		RIGHT,
		DOWN_RIGHT,
		DOWN,
		DOWN_LEFT,
		LEFT,
		UP_LEFT,
		COUNT
	};

	Direction mDirection;
	float mSteps;

public:
	Bug(D2DFramework* pFramework);

	virtual void Draw() override;
};

