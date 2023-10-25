#include "BuggyHouse.h"

HRESULT BuggyHouse::Initialize(HINSTANCE hinstance, LPCWSTR title, UINT width, UINT height)
{
    HRESULT hr;
    hr = D2DFramework::Initialize(hinstance, title, width, height);
    ThrowIfFailed(hr, "Failed to D2DFramework:initialize");
   
    mspBackground = std::make_shared<Actor>(this, L"Images/back.png", 0.0f, 0.0f, 1.0f);
   
    float x{};
    float y{};
    RECT rct{};
    GetClientRect(mHwnd, &rct);

    
    for (int i = 0; i <40; i++)
    {
        x = rand() % (rct.right-rct.left) ;
        y = rand() % (rct.bottom - rct.top);
        mbugList.push_back(std::make_shared<Actor>(this, L"Images/bug.png", 0.0f, 0.0f, 1.0f));
    }

    return S_OK;
}

void BuggyHouse::Render()
{
    mspRenderTarget->BeginDraw();
    mspRenderTarget->Clear(D2D1::ColorF(0.0f, 0.2f, 0.4f, 1.0f));

    mspBackground->Draw();
    for (auto& bug : mbugList)
    {
        /*auto pt = bug->GetPosition();
        pt.x += (rand() % 3 - 1);
        pt.y += (rand() % 3 - 1);
        bug->SetPosition(pt);*/



        bug->Draw();
    }

    HRESULT hr = mspRenderTarget->EndDraw();

    if (hr == D2DERR_RECREATE_TARGET)
    {
        CreateDeviceResources();
    }
}

void BuggyHouse::Release()
{
    for (auto& bug:mbugList)
    {
        bug.reset();
    }
    mbugList.clear();
    mspBackground.reset();

    D2DFramework::Release();
}
