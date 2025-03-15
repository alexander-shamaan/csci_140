#include <iostream>

using std::cout;
using std::endl;

typedef unsigned int uint;
typedef long long matrix; //signed 64 bits
//could have also used define

using ulong = unsigned long; // created another alias 
// similar to typedef
// c++ statements need ;

int main(int argc, char const *argv[])
{
    //unsigned int c{};

    uint c{};

    size_t s; // typedef unsigned int size_t

    matrix m[10][10];

    //std::cout << static_cast<unsigned char>(c - 1) << std::endl;
    //converts data type to another data type

    cout << (c - 1) << std::endl;



    return 0;
}
