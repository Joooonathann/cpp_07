#pragma once

template<typename C>
void swap(C &a, C &b)
{
    C tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename C>
C min(const C &a, const C &b)
{
    return (a < b ? a : b);
}

template<typename C>
C max(const C &a, const C &b)
{
    return (a > b ? a : b);
}

