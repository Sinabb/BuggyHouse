#pragma once
#include "Actor.h"
class Bug : public Actor
{
	// 화면 테두리에서 등장
	// 일정 방향 이동
	// 45도 단위로 전환
	const D2D_POINT_2F UPVECTOR{ 0.0f, -1.0f };
	float mRotation;
	float mSteps;
public:
	bool mIsDead;
public:
	Bug(D2DFramework* pFramework);

	virtual void Draw() override;

	bool Iscliked(POINT& pt);
};

