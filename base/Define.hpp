#ifdef FRAMEWORK
#define SYMBOL_FRAMEWORK __declspec(dllexport)
#else 
#define SYMBOL_FRAMEWORK __declspec(dllimport)
#endif
