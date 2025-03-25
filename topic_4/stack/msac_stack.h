#include <cstddef>

#ifndef MSAC_STACK_H
#define MSAC_STACK_H

#define MAX_STACK_SIZE 100

struct Stack
{
    size_t top{};

    int array[MAX_STACK_SIZE];
};

//push: adds an integer to the stack
// v: the integer to be added
// s: is the Stack object(by reference)
// returns nothing
void push(int, Stack&);

//pop: removes an integer from the stack
// s: is the Stack object(by reference)
// returns nothing
void pop(Stack&);

//peeks: looks at integer at top of stack
// s: is the Stack object(by reference)
// returns item at top of the stack
int peek(const Stack&);

//returns true or false;
bool empty(const Stack&);


#endif