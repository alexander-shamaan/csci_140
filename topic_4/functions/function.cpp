#include "function.h"

void printString(const std::string& s)
{
    printString(s, 1);
}

void printString(const std::string& s, int count)
{
    for (size_t i = 0; i < count; i++)
    {
        std::cout << s << std::endl;
    }
    
}

void swap(int& a, int& b)
{
    int temp{a};
    a = b;
    b = a;
}
