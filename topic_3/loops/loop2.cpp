#include <iostream>
#include <cstdint>

uint64_t fib(uint32_t);


int main(int argc, char const *argv[])
{
    // size_t i{};

    // if(i != 0)
    //     return 0;

    // do
    // {
    //     std::cout << i++ << " ";
    // } while (i < 10);

    std::cout << fib(5) << std::endl;
        
    return 0;
}

uint64_t fib(uint32_t n)
{
    uint64_t back = 0;

    for (uint64_t i = 0, front = 1, tmp; 
        i < n; 
        i++, tmp = front, front += back, back = tmp);// can only put one type in this declaration
    //size_t is a uint64_t
    // scope of variables are only inside of the loop
    // empty statement


    return back;
}