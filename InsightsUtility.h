/******************************************************************************
 *
 * C++ Insights, copyright (C) by Andreas Fertig
 * Distributed under an MIT license. See LICENSE for details
 *
 ****************************************************************************/

#ifndef INSIGHTS_UTILITY_H
#define INSIGHTS_UTILITY_H

#include "llvm/ADT/STLExtras.h"

#include <utility>
//-----------------------------------------------------------------------------

#define FWD(...) ::std::forward<decltype(__VA_ARGS__)>(__VA_ARGS__)
//-----------------------------------------------------------------------------

using void_func_ref = llvm::function_ref<void()>;
//-----------------------------------------------------------------------------

template<typename T, typename... Ts>
concept same_as_any_of = (std::same_as<T, Ts> || ...);

#endif /* INSIGHTS_UTILITY_H */