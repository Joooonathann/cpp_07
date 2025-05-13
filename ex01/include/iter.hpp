#include <cstddef>
#pragma once

template<typename C>
void    iter(C *tab, size_t len, void (*f)(C &))
{
    if (!tab || !f)
        return ;
    for (size_t i = 0; i < len; i++)
        f(tab[i]);
}