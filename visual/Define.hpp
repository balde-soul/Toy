#ifdef TOY_VISUAL_DEFINE
#define TOY_VISUAL_DEFINE
#ifdef TOY_VISUAL
#define SYMBOL_VISUAL __delspec(dllexport)
#else
#define SYMBOL_VISUAL __delspec(dllimport)
#endif
