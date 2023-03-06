#pragma once
#include <algorithm>
#include "mathFunctions.h"
#include "olcPixelGameEngine.h"

const bool wireframe = true;

class Engine : public olc::PixelGameEngine {
public:
    Engine();

public:
    bool OnUserCreate() override;

    bool OnUserUpdate(float fElapsedTime) override;

private:
    mesh currentMesh;
    vector3D vCamera;
    vector3D lightDirection = { 0.0f, 0.0f, -1.0f };

    float fTheta;
    const float fNear = 0.1f;
    const float fFar = 1000.0f;
    const float fFov = 90.0f;
    const float fAspectRatio = float(ScreenHeight()) / float(ScreenWidth());
    const float fFovRad = 1.0f / tanf(fFov * 0.5f / 180.0f * 3.14159f);
    const float offset = 4.0f; private:

};
