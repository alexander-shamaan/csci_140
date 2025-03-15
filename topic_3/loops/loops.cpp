#include <iostream>



int main(int argc, char const *argv[])
{
    
    size_t i{};

    // for (; ; )
    // {
    //     if(i >= 10) break;
        
    //     std::cout << i << " ";

    //     i++;
    // }


    // while(i < 10)
    // {   
    //     std::cout << i << " ";

    //     i++;
    // }

    if(i != 0)
    {
        return 0;
    }

    do
    {   
        std::cout << i++ << " ";
    } while(i < 10); 


    // do
    //     std::cout << i++ << " ";
    // while (i < 10);
    
    

    


    std::cout << std::endl;


    return 0;
}
