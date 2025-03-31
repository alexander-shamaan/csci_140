#include <iostream>
#include <ctime>
#include "rpsvl_game.h"

void displayMenu(char& response)
{
    bool validLetter;

    std::cout << "Welcome to Rock-Paper-Scissors-Vader-Luke" << std::endl;
    std::cout << "Rules:\n"
              << "\tScissors cut paper.\n"
              << "\tPaper covers rock.\n"
              << "\tRock bashes Vader.\n"
              << "\tVader throws Luke.\n"
              << "\tLuke bends scissors.\n"
              << "\tScissors stab Vader\n"
              << "\tVader burns paper.\n"
              << "\tPaper banishes Luke.\n"
              << "\tLuke levitates rock.\n"
              << "\tRock breaks scissors." << std::endl << std::endl;

    std::cout << "Would you like to play Rock-Paper-Scissors-Vader-Luke? (y/n): ";
    std::cin >> response;
    std::cin.ignore(1024, '\n');

    response = tolower(response);
    validLetter = validateChoice(response);

    while(!validLetter)
    {
        std::cout << "Bad option" << std::endl;
        std::cout << "Would you like to play Rock-Paper-Scissors-Vader-Luke? (y/n): ";
        std::cin >> response;
        std::cin.ignore(1024, '\n');

        response = tolower(response);
        validLetter = validateChoice(response);
    }
}

bool validateChoice(char& letter)
{
    return (letter != 'n' && letter != 'y') ? false : true;
}

void getRandomChoice(int& compChoice)
{
    srand(time(0)); 
    compChoice = rand()% 5 + 1;
}

void getUserChoice(int& choice)
{
    char letter;
    bool validLetter;
    
    std::cout << std::endl;
    std::cout << "Option menu\n"
              << "(R)ock\n"
              << "(P)aper\n"
              << "(S)cissors\n"
              << "(V)ader\n"
              << "(L)uke" << std::endl;

    std::cout << "Enter the letter of your choice: ";
    std::cin >> letter;
    std::cin.ignore(1024, '\n');

    letter = toupper(letter);
    validLetter = validateInput(letter);

    while(!validLetter)
    {
        std::cout << "Bad option\n"
                  << "Please enter a valid letter (R/P/S/V/L)\n"
                  << "Enter the letter of your choice: ";
        std::cin >> letter;
        std::cin.ignore(1024, '\n');

        letter = toupper(letter);
        validLetter = validateInput(letter);
    }

    switch (letter)
    {
    case 'R':
        choice = 1; break;
    case 'P':
        choice = 2; break;
    case 'S':
        choice = 3; break;
    case 'V':
        choice = 4; break;
    case 'L':
        choice = 5; break;
    }
}

bool validateInput(char letter)
{
    return (letter != 'R' && letter != 'P' && letter != 'S' && letter != 'V' && letter != 'L' )? false : true;
}

void round(int user, int computer)
{
    switch (computer)
    {
    case 1:
        rock(user);
        break;
    case 2:
        paper(user);
        break;
    case 3:
        scissors(user);
        break;
    case 4:
        vader(user);
        break;
    case 5:
        luke(user);
        break;
    }
}

void rock(int user)
{
    displayUserChoice(user);
    std::cout << "the computer chose rock" << std::endl;

    if(user == 1)
    {
        std::cout << "Draw!" << std::endl;
    }
    else if(user == 2)
    {
        std::cout << "Paper covers rock." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(user == 3)
    {
        std::cout << "Rock breaks scissors." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(user == 4)
    {
        std::cout << "Rock bashes Vader." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else
    {
        std::cout << "Luke levitates rock." << std::endl;
        std::cout << "You win!" << std::endl;
    }
}

void paper(int user)
{
    displayUserChoice(user);
    std::cout << "the computer chose paper" << std::endl;

    if(user == 1)
    {
        std::cout << "Paper covers rock." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(user == 2)
    {
        std::cout << "Draw!" << std::endl;
    }
    else if(user == 3)
    {
        std::cout << "Scissors cut paper." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(user == 4)
    {
        std::cout << "Vader burns paper." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "Paper banishes Luke." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
}

void scissors(int user)
{
    displayUserChoice(user);
    std::cout << "the computer chose scissors" << std::endl;

    if(user == 1)
    {
        std::cout << "Rock breaks scissors." << std::endl;
        std::cout << "You win!" << std::endl;

    }
    else if(user == 2)
    {
        std::cout << "Scissors cut paper." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(user == 3)
    {
        std::cout << "Draw!" << std::endl;
    }
    else if(user == 4)
    {
        std::cout << "Scissors stab Vader." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else
    {
        std::cout << "Luke bends scissors." << std::endl;
        std::cout << "You win!" << std::endl;
    }
}

void vader(int user)
{
    displayUserChoice(user);
    std::cout << "the computer chose Vader" << std::endl;

    if(user == 1)
    {
        std::cout << "Rock bashes Vader." << std::endl;
        std::cout << "You win!" << std::endl;

    }
    else if(user == 2)
    {
        std::cout << "Vader burns paper." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(user == 3)
    {
        std::cout << "Scissors stab Vader." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(user == 4)
    {
        std::cout << "Draw!" << std::endl;
    }
    else
    {
        std::cout << "Vader throws Luke." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
}

void luke(int user)
{
    displayUserChoice(user);
    std::cout << "the computer chose Luke" << std::endl;

    if(user == 1)
    {
        std::cout << "Luke levitates rock." << std::endl;
        std::cout << "You lose!" << std::endl;

    }
    else if(user == 2)
    {
        std::cout << "Paper banishes Luke." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(user == 3)
    {
        std::cout << "Luke bends scissors." << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(user == 4)
    {
        std::cout << "Vader throws Luke." << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "Draw!" << std::endl;
    }
}

void displayUserChoice(int user)
{
    switch (user)
    {
    case 1:
        std::cout << "You chose rock ";
        break;
    case 2:
        std:: cout << "You chose paper ";
        break;
    case 3:
        std:: cout << "You chose scissors ";
        break;
    case 4:
        std:: cout << "You chose Vader ";
        break;
    case 5:
        std:: cout << "You chose Luke ";
        break;
    }
}

void playAgain(char& again)
{
    bool validLetter;

    std::cout << "Play again? (y/n): ";
    std::cin >> again;
    std::cin.ignore(1024, '\n');

    again = tolower(again);
    validLetter = validateChoice(again);

    while(!validLetter)
    {
        std::cout << "Bad option" << std::endl;
        std::cout << "Play again? (y/n): ";
        std::cin >> again;
        std::cin.ignore(1024, '\n');

        again = tolower(again);
        validLetter = validateChoice(again);
    }
}
