//
// Created by cydeamon on 26.11.2023.
//

#ifndef NOWHERETORUN_ENGINE_H
#define NOWHERETORUN_ENGINE_H

#include "Render.h"
#include "../CMakeConfig.h"
#include "Color.h"
#include <iostream>

namespace Cygine
{
    class Engine
    {
    public:
        Engine();
        ~Engine();

        bool ShouldClose();
        void BeginFrameDraw();
        void EndFrameDraw();
        void Update();

    private:
        GLFWwindow *window = nullptr;

        void initWindow();
        static void glfwErrorCallback(int error, const char *description);
        static void updateWindowResolutionCallback(GLFWwindow *window, int width, int height);
    };
}

#endif //NOWHERETORUN_ENGINE_H
