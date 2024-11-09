#pragma once
#include "Application.h"
#include <cstdio>
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char**argv)
{
    printf("Hello Engine\n");
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
    return 0;
}
#endif // HZ_PLATFORM_WINDOWS