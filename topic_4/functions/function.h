#include <iostream>

#define WINDOWS true 
    
#ifndef FUNCTION_H
#define FUNCTION_H

void printString(const std::string&);
void printString(const std::string&, int ); //print x amount of times

void swap(int& , int&);

#if WINDOWS
void printInt(int);
void printInt();

//void printInt(int = 10);

#endif //WINDOWS

#endif