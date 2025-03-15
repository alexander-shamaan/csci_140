#include <iostream>
#include <cstdlib>
#include <ctime>

#define SCALING_FACTOR 6
int randomRange(int, int);
int randomDieFace();
int main(int argc, char const *argv[])

{
    srand(time(0)); // could use null as well

    int newLineCounter{};
    
    for (size_t i = 0; i < 10; i++)
    {
        //std::cout << rand()% SCALING_FACTOR << RAND_MAX << std::endl;
        //std::cout << rand()% SCALING_FACTOR << std::endl;
        //std::cout << RAND_MAX << std::endl;

        // std::cout << randomRange(1,6) << " ";

        std::cout << randomDieFace() << " ";

        // if(newLineCounter++ == 5)
        // {
        //     newLineCounter = 0;
        //     std::cout << std::endl;
        // }
    }
    std::cout << std::endl;

    return 0;
}

int randomRange(int start, int end)
{
    return rand()% (end - start + 1) + start;
}

int randomDieFace()
{
    return randomRange(1,6);
}

// will always print the same random values unless we use srand(time(0));
// 6
// 6
// 5
// 5
// 6
// 5
// 1
// 1
// 5
// 3