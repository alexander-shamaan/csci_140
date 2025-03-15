#include <iostream>

#include "ui.h" //is like a copy and paste

#define ROW_QTY 8
#define COL_QTY 8
#define USER_SYMBOL 'U'

uint32_t userPos{63};


void start()
{
    Move move;
    //greet the player
    welcomeMsg();

    //loop
    // next move
    while(true)
    {
        // print the enviornment
        printEnvironment();

        //prompt for move
        move = getValidMove();

        if(move == EXIT)
            break;

        // make move, updates user position
        processMove(move);
    }
}

void welcomeMsg()
{
    std::cout << "Welcome to the Moving Game\n";
}

void processMove(Move move)
{
    switch (move)
    {
    case LEFT:
        --userPos;
        break;
    
    case RIGHT:
        ++userPos;
        break;

    case UP:
        userPos -= COL_QTY;
        break;

    case DOWN:
        userPos += COL_QTY;

    }
}

void printEnvironment()
{
    for (uint64_t row = 0; row < ROW_QTY; ++row)
    {
        printLine();
        printRow(row);

    }
    printLine();
}

Move getValidMove()
{
    return Move();
}

void printLine()
{
    for (uint64_t i = 0; i < COL_QTY; i++)
    {
        std::cout << "------";
    }
    std::cout << "-\n";
    
}

void printRow(uint64_t row)
{

    uint64_t pos;
    char symbol;
    for (uint64_t i = 0; i < COL_QTY; i++)
    {
        pos = row * COL_QTY + i;
        symbol = (pos == userPos) ? USER_SYMBOL : ' ';
        std::cout << "|  " << symbol << "  ";

    }

    std::cout << "|\n";
    
}
