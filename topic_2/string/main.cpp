#include <iostream>

size_t strlen(char[]);

int main(int argc, char const *argv[])
{
    char s[] = "this is a string";

    // int i{}; // default value 0

    // while(s[i] != 0)
    // {
    //     std::cout << s[i++];

    // }

    std::cout << strlen(s) << std::endl;


    //std::cout << s << std::endl;

    return 0;
}

size_t strlen(char s[])
{
    int i{};
    while(s[i++] != 0);
    {
        
    }

    return i - 1;
}