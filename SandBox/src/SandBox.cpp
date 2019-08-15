#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
			
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

