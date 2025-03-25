#include <iostream>

int i{100};

// int main(int argc, char const *argv[])
// {
//     int i{50};

//     for (size_t i = 0; i < 1; ++i)
//     { // i is 3 levels deep
//        //std::cout << ::i << std::endl; //50

//        std::cout << i << std::endl; // 0 

//        {
//             int i{25};
//             std::cout << i << std::endl; //25

//        }

//        std::cout << i << std::endl; //0

//     }

//     std::cout << i << std::endl; //50
    
//     return 0;
// }


int main(int argc, char const *argv[])
{
    int i{50};

    for (; i < 101; ++i)
    { // i is 3 levels deep
       //std::cout << ::i << std::endl; //50

       std::cout << i << std::endl; // 100

       {
            int i{25};
            std::cout << i << std::endl; //25

       }

       std::cout << ::i << std::endl; //100

    }

    std::cout << i << std::endl; //101
    
    return 0;
}
