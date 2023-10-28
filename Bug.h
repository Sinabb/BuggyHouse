#pragma once
#include "Actor.h"
class Bug : public Actor
{
	// ȭ�� �׵θ����� ����
	// ���� ���� �̵�
	// 45�� ������ ��ȯ
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

