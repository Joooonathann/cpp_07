#include <iostream>
#include "./include/iter.hpp"

static void tolower(char &c)
{
    c = std::tolower(static_cast<unsigned char>(c));
}

static void multiple_10(int &i)
{
    i *= 10;
}

int main(void)
{
    char    letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int     numbers[10] = {3, 4, 5, 6 , 5, 8774, 2, 862, 2764, 88};

    std::cout << "Letters tab:" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << "[" << i << "] " << letters[i] << std::endl;

    std::cout << "\nLetters tab after iter tolower:" << std::endl;
    ::iter(letters, 10, &tolower);
    for (int i = 0; i < 10; i++)
        std::cout << "[" << i << "] " << letters[i] << std::endl;

    std::cout << "Int tab:" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << "[" << i << "] " << numbers[i] << std::endl;

    std::cout << "\nInt tab after iter multiple x10:" << std::endl;
    ::iter(numbers, 10, &multiple_10);
    for (int i = 0; i < 10; i++)
        std::cout << "[" << i << "] " << numbers[i] << std::endl;

    return (0);
}