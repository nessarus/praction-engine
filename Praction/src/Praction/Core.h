#pragma once

#ifdef PT_PLATFORM_WINDOWS
	#ifdef PT_BUILD_DLL
		#define PRACTION_API __declspec(dllexport)
	#else
		#define PRACTION_API __declspec(dllimport)
	#endif
#else
	#error Praction only supports Windows!
#endif
	