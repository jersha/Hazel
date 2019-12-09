#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API _declspec(dllexport)
	#else
		#define HAZEL_API _declspec(dllimport)
	#endif // DEBUG
#else
	#error Hazel only support windows!
#endif // HZ_PLATFORM_WINDOWS
