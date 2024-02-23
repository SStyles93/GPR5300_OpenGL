#pragma once
#include "scene.h"

namespace gpr5300
{

class Engine
{
public:
    Engine(Scene* scene);
    //Engine(Scene* scene, Camera* camera);
    void Run();
private:
    void Begin();
    void End();
    Scene* scene_ = nullptr;
    SDL_Window* window_ = nullptr;
    SDL_GLContext glRenderContext_{};

    float SCREEN_WIDTH = 1290;
    float SCREEN_HEIGHT = 720;
};
    
} // namespace gpr5300
