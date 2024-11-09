#include<Hazel/Hazel.h>

class MySandBox : public Hazel::Application
{
public:
    MySandBox()
    {
    }

    ~MySandBox()
    {
    }
};

Hazel::Application*Hazel::CreateApplication()
{
    return new MySandBox();
}
