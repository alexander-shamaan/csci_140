#include "msac_stack.h"

void push(int v, Stack& s)
{
    s.array[s.top++] = v; //increment top after you use it
}

void pop(Stack& s)
{
    --s.top; //decrement
}

int peek(const Stack& s)
{
    return s.array[s.top - 1]; // looks at the next element below it
}

bool empty(const Stack& s)
{
    return s.top == 0; //make sure top is 0 to make sure its empty
    
}