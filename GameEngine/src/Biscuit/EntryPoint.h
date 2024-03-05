#pragma once

#ifdef BC_PLATFORM_WINDOWS

extern Biscuit::Application* Biscuit::CreateApplication();

int main(int argc, char** argv)
{
	//Biscuit::Log::Init();
	Biscuit::Log::Init();
	printf("Biscuit Engine\n");
	auto app = Biscuit::CreateApplication();
	app->Run();
	delete app;
}
#endif