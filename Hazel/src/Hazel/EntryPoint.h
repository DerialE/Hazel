#pragma once


#ifdef HZ_PLATFORM_WINDOWS

//Somewere in Clien side will be defined 
extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int var = 5;
	HZ_INFO("Hello var = {0}",var);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif 