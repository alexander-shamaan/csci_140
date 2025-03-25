#include <iostream>

#include "msac_stack.h"

int main(int argc, char const *argv[])
{
    Stack stack;

    for (int i = -10; i < 0; i++)
    {
        std::cout << i << " ";
        push(i, stack);
    }
    std::cout << std::endl;

    while(!empty(stack))
    {
        std::cout << peek(stack) << " ";
        pop(stack);
    }
    
    return 0;
}
