#pragma once
#include "Application.h"
#include "Log.h"
#include <cstdio>
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char**argv)
{
    printf("Hello Engine\n");
    Hazel::Log::Init();
    HZ_CORE_WARN("Initializing Engine");
    HZ_CORE_INFO("Hello world!");
    int a = 5;
    HZ_INFO("Hello! Var = {0}",a);


    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
    return 0;
}
#endif // HZ_PLATFORM_WINDOWS