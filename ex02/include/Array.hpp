#pragma once

#include <stdexcept>

template<typename T>
class Array
{
    private:
        T               *_data;
        unsigned int    _size;
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array(void);

        Array           &operator=(const Array &copy);
        T               &operator[](unsigned int index);
        const T         &operator[](unsigned int index) const;
        unsigned int    size(void) const;
};

#include "../src/Array.tpp"