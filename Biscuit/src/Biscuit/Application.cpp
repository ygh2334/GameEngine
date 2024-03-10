#include "bcpch.h"
#include "Application.h"

#include "Biscuit/Events/ApplicationEvent.h"
#include "Biscuit/Log.h"

namespace Biscuit {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			BC_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			BC_TRACE(e);
		}

		while (true);
	}
}