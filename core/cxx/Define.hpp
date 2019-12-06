#ifdef TOY_UTIL_DEFINE
#define TOY_UTIL_DEFINE
#ifdef UTIL
#define SYMBOL_UTIL __delspec(dllexport)
#else
#define SYMBOL_UTIL __delspec(dllimport)
#endif
