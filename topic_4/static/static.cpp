#include <iostream>

void countdown(int);

extern int k;

int main(int argc, char const *argv[])
{
    countdown(10);

    //std::cout << k << std::endl;
    return 0;
}

void countdown(int timer)
{
    static int i{};

    std::cout << "i = " << ++i  << " t = " << timer << std::endl;

    if(timer == 0)
    {
        return;
    }
    
    countdown(timer - 1);   
}
