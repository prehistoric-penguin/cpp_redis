#pragma once

// For windows dll API
#ifdef _MSC_VER
	#ifdef CPP_REDIS_STATIC_LIB
		#define CPP_REDIS_EXPORT
	#else
		#if CPP_REDIS_DLL_EXPORTS
			#define CPP_REDIS_EXPORT __declspec(dllexport)
		#else
			#define CPP_REDIS_EXPORT __declspec(dllimport)
		#endif // CPP_REDIS_DLL_EXPORTS
	#endif // CPP_REDIS_STATIC_LIB
#else
	#define CPP_REDIS_EXPORT
#endif // _MSC_VER
