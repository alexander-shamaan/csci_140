#include <iostream>

void printInteger(long);

int main(int argc, char const *argv[])
{
    int i{25};

    printInteger(i);

    return 0;
}

void printInteger(long i)
{
    std::cout << i << std::endl;
}
