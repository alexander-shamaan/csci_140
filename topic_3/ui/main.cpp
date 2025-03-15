#include <iostream>

void printMenu();

char getUserOption(const std::string&);

void processOption(char);

bool isValidOption(char);

int main(int argc, char const *argv[])
{
    
    char option;

    //display a menu
    printMenu();


    //prompt the user for their choice
    option = getUserOption("Enter option (a - c) :  ");


    // act on their choice
    processOption(option);

    return 0;
}

void printMenu()
{
    std::cout << 
        "Welcome to Our Program\n" <<
        " a: You are 18 or over.\n" <<
        " b: You are a senior. \n" <<
        " c: Cancel the Purchase.\n";

}

char getUserOption(const std::string& prompt)
{
    char option;

    std::cout << prompt; // answer should be on the same line as prompt
    std::cin >> option; //extract option

    // option = tolower(option);

    // if(option >= 'a' && option <= 'c')
    // {
    //     return option;
    // }

    if(isValidOption)
    {
        return option;
    }

    std::cout << "Invalid input!!!\n Try again\n";
    
    return getUserOption(prompt);
}


void processOption(char option)
{
    
    
    switch (option)
    {
        case 'a': case 'A':
            std::cout << "Your purchase is approved.\n";
            break;

        case 'b': case 'B':
            std::cout << "You get a senior discount.\n";
            break;

        case 'c': case 'C':
            std::cout << "Your purchase is cancelled.\n";
    }
}

bool isValidOption(char option)
{
    option = tolower(option);
    return option >= 'a' && option <= 'c';
}
