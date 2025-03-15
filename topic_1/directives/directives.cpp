#include <iostream>
#define ARRAY_SIZE 10
//preprocessor directive
//leading hashtag - preprocessor statement
//not taking memory, and will look in the code and replace any word ARRAY_SIZE and replace it with 10
// this is not technically global, since its only in this file, we are using it alongside the heap section. 
// only need to change it once. #define is not in the stack/ memory
// define is treated like a replace operation


//const int ARRAY_SIZE{10};

//prototype
void prettyPrintArray(int[], int);


int main(int argc, char const *argv[])
{
    //int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array[ARRAY_SIZE];

    // array[0] = 10;
    // array[1] = 20;


    //std::cout << sizeof(array)  << std::endl;

    //prettyPrintArray(array, 10);
    //prettyPrintArray(array, sizeof array / sizeof (array[0])); //semi poser way
    prettyPrintArray(array, sizeof array / sizeof (array[0])); // if we change array to long data type then this would work as well

    // because we changed the prototype, we are missing a parameter


    return 0;
}

//f2 while selected while change both names at once for the function name
void prettyPrintArray(int array[], int size)
{
    std::cout << "[ ";

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    
    std::cout << "]\n";


    //std::cout <<  << std::endl;





}









/*
    cpp file is a source code file
    No classes needed

    could write main with no parameters at all and will still work
    we have the ability to pass information that we will use

    most of the time we are providing the information to run programs

    preprocessor will stilli include iostream

    the two arguments
    argc is an integer
        the argument is the # of command line arguments
        always at least one
        argc >= 1

        argv will have at least 1 string

        two-dimensional array of characters

        if we declare an array of integers
        int array[5];
            5 elements of type int's
            continuous space

            space is in the stack
        
        the subscript that we are passing: int array[5];
            offset in element
        
        5 elements = 4 bytes of space each 
            = 20 bytes of space

        stack

        20 bytes will be at the top of the stock when we start running

    we can overload traditional operators in c++
    
    in high level code

    array[s] = ... some value

    a holds an address to the first byte
        a + s * sizeof(int)
                sizeof(s[0])
    
    cout is listed in iostream
    endl is also in iostream
    << is an integer bitwise operator
        has been redefined by the bitwise class
            is an insertion operator now


    after running code it returns the size of bytes
        returns size of single element of an array which is 4
    the smallest unit that we can read and write is a byte

    size of array is 5 elements and each element uses 4 bytes so the size of the array is 20 bytes

    since its an integer bytes each element is 4 bytes

    elements of the array are mutable - can be changes
    size of the array is immutable

    size of is an operator
        only time we need parantheses is when we are passing a type

            ex: sizeof(int)

                = 4

            ex: sizeof(long)

                = 4

        size is used to help make decisions in our program

        size of(array)
            also works
            always use parantheses just in case

        int postinc(int&)
        pseudo: int postinc(int a byref)
        {
            int temp = a
            a = a + 1

            return temp
        }
        using extra memory to run

        int byref preinc(int a byref)
        {
            a = a + 1
            return a
        }

        a for loop is a while loop in code
        
        the last instruction in a while loop is an incrementation

        int i = 0

        while(i < 10)
        {
        
            ++i
        }


        int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        this is a raw array

*/