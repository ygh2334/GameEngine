#pragma once

#include "Core.h"

namespace Biscuit {

	class BISCUIT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};
}