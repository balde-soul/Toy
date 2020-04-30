#ifndef TOY_FUNCTION_DEFINE_H
#define TOY_FUNCTION_DEFINE_H
#include <ProjectBase/cross_platform/util_method.hpp>
#include <ProjectBase/cross_platform/symbol.hpp>
#if defined(TOY_FUNCTION)
#define CT_BASE_FUNCTION_SYMBOL SYMBOL_EXPORT
#else
#define PROJECT_BASE_FUNCTION_SYMBOL SYMBOL_IMPORT
#endif // !1PROJECT_BASE_MULTI_LANGUAGE

#pragma message(MACRO_TO_STRING(PROJECT_BASE_FUNCTION_SYMBOL))

#else
#endif // !1PROJET_BASE_MULTI_LANGUAGE_DEFINE_H

