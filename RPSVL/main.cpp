#include "rpsvl_game.h"

int main(int argc, char const *argv[])
{
    char response;
    int compChoice;
    int choice;
    char again;

    displayMenu(response);

    if(response != 'n')
    {
        do
        {
            getRandomChoice(compChoice);
            
            getUserChoice(choice);

            round(choice, compChoice);

            playAgain(again);

        } while (again != 'n');   
    }

    return 0;
}
