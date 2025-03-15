#include <iostream>
#include <cstdint>

uint64_t fib(uint32_t); //ctrl + d to change multiple

int main(int argc, char* argv[])
{
    uint32_t n {10};
    std::cout << fib(n) << std::endl;

    return 0;
} 

uint64_t fib(uint32_t n)
{
    // if(n <= 1)
    // {
    //     return n;
    // }
    // return fib(n-1) + fib(n -2);

    uint64_t back{0};
    uint64_t front{1};
    uint64_t temp;

    for (size_t i = 0; i < n; ++i)
    {
        temp = front;
        front += back;
        back = temp;
    } 
    
    return back;
}

//g++ main.cpp -o main.exe on windows
//./main.exe to run code
//g++ main.cpp -E -o main.exp 
//g++ main.cpp -S -o main.exp ;assembly language
//g++ main.cpp -c binary