#include "Bug.h"

Bug::Bug(D2DFramework* pFramework) : Actor(pFramework, L"Images/bug.png")
{
	RECT rct{};
	GetClientRect(pFramework->GetHWND(), &rct);

	mX = static_cast<float>(rand() % (rct.right - rct.left));
	mY = static_cast<float>(rand() % (rct.bottom - rct.top));

}

void Bug::Draw()
{
	mX += static_cast<float>(rand() % 3 - 1);
	mY += static_cast<float>(rand() % 3 - 1);


Actor::Draw();
}
