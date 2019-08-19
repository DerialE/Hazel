#include <Hazel.h>


class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		HZ_INFO("Example Layer::Update");
	}

	void OnEvent(Hazel::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}
};


class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		//first creates base class -> Hazel::Application
		PushLayer(new ExampleLayer());
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

