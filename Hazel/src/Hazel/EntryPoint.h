#pragma once


#ifdef HZ_PLATFORM_WINDOWS

//Somewere in Clien side will be defined 
extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv)
{
	//std::cout << "Hazel Engine" << std::endl;
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif 