#include <iostream>
#include <array> 
#include <vector>

#define ARRAY_SIZE 10

void printArray(long long*, size_t);
void printArray(const std::array<int, 10>&); // const pass by reference
void printMatrix(int[][4], size_t, size_t);

int main(int argc, char const *argv[])
{
    long long array[]{1,2,3,4,5,6,7,8,9,10};

    std::array<int, 10> a{1,2};

    std::array<std::array<int, 4>, 3> m;


    std::vector<int> v{1,2};

    std::vector<int> v2(1);

    std::cout << v[0] << std::endl;

    int matrix[][4]{0, 1, 2, 3, 
                    4, 5, 6, 7, 
                    8, 9, 10, 11};
    
    //printArray(array, ARRAY_SIZE);

    //printMatrix(matrix, 3, 4);

    printArray(a);

    return 0;
} // watch addres of a and b

void printArray(long long* a, size_t size)
{
    std::cout << a << " " << sizeof(a)  << std::endl; // 

    std::cout << a << " " << &a  << std::endl; // address of the pointer variable

    std::cout << "[ ";

    for(size_t i = 0; i < size; i++)
    {
        std::cout << *(a + i) << " ";
    }
    std::cout << "]\n";
}

void printArray(const std::array<int, 10>& a)
{

    std::cout << "[ ";

    // for(size_t i = 0; i < a.size(); i++)
    // {
    //     std::cout << a[i] << " "; // access like a plain old fashioned raw array. 
    // }

    for(int i : a)
        std::cout << i << " "; // range based for-loop
    

    std::cout << "]\n";
}


void printMatrix(int matrix[][4], size_t rowQTY, size_t colQTY)
{
    for (size_t r = 0; r < rowQTY; ++r)
    {
        for (size_t c = 0; c < colQTY; ++c)
        {
            std::cout << " | " << matrix[r][c];
        }
        std::cout << " |\n ";
    }
}
