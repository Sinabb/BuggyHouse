#pragma once
#include "Actor.h"
class Bug : public Actor
{
	// ȭ�� �׵θ����� ����
	// ���� ���� �̵�
	// 45�� ������ ��ȯ
public:
	Bug(D2DFramework* pFramework);
	virtual void Draw() override;
};

