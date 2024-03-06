#include <Biscuit.h>
//#include "Biscuit/Log.cpp"


class Sandbox :public Biscuit::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Biscuit::Application* Biscuit::CreateApplication()
{
	return new Sandbox();
}