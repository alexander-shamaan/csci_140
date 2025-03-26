#include <iostream>

void printReverseInt(unsigned int);
size_t gcd(size_t, size_t);
size_t arraySum(size_t[], size_t);

int main(int argc, char const *argv[])
{
    //printReverseInt(1024);

    //std::cout << gcd(13, 5);

    //const int SIZE = 10;
    size_t array[]{1,2,3,4,5,6,7,8,9,10};

    std::cout << arraySum(array, sizeof(array) / sizeof(array[0])) 
              << std::endl;

    


    return 0;
}

void printReverseInt(unsigned int i)
{
    if(i  == 0) 
    {
        std::cout << std::endl;
        return;
    }

    std::cout << i % 10;
    
    
    printReverseInt(i / 10);
    
}

size_t gcd(size_t a, size_t b)
{
    if(b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}


size_t arraySum(size_t array[], size_t size)
{
    if(size == 0)
    {
        return 0;
    }

    return array[size - 1] + arraySum(array, size - 1);

}
