#include "function.h"

int main(int argc, char const *argv[])
{
    //std::string s{"hello"};
    //printString(s, 5);


    int a{5};
    int b{10};

    std::cout << a << " " << b << std::endl;

    swap(a,b);

    std::cout << a << " " << b << std::endl;

    
    return 0;
}

