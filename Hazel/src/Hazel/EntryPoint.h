#pragma once

#include"iostream"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	std::cout << "Welcome to Hazel Engine" << std::endl;
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Hazel supports only Windows!
#endif // HZ_PLATFORM_WINDOWS
