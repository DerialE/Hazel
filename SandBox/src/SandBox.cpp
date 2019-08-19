#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		//first creates base class -> Hazel::Application

	}

	~Sandbox()
	{

	}

private:

};

//Here we create Client's Application
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}

