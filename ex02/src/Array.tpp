#pragma once

#include <iostream>
#include "../include/Array.hpp"

template<typename T>
Array<T>::Array(void) : _data(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

template<typename T>
Array<T>::Array(const Array &copy) : _data(NULL), _size(0)
{
    *this = copy;
}

template<typename T>
Array<T>::~Array(void)
{
    delete[] this->_data;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (this != &copy)
    {
        delete[] this->_data;
        this->_size = copy._size;
        this->_data = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
            this->_data[i] = copy._data[i];
    }
    return (*this);
}

template<typename T>
T   &Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size)
        throw (std::out_of_range("Index out of bounds"));
    return (this->_data[index]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size)
        throw (std::out_of_range("Index out of bouds"));
    return (this->_data[index]);
}

template<typename T>
unsigned int    Array<T>::size(void) const
{
    return (this->_size);
}