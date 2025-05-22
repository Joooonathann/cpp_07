#include <iostream>
#include "./include/Array.hpp"

int main()
{
    try {
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i * 10;

        std::cout << "Original array:" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << "[" << i << "] = " << a[i] << std::endl;

        Array<int> b = a; // Copie
        b[0] = 999;

        std::cout << "\nModified copy:" << std::endl;
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << "[" << i << "] = " << b[i] << std::endl;

        std::cout << "\nOriginal should remain unchanged:" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << "[" << i << "] = " << a[i] << std::endl;

        std::cout << "\nAccessing out of bounds:" << std::endl;
        std::cout << a[100] << std::endl; // doit throw
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return (0);
}
