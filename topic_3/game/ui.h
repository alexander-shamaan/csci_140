#include <cstdint>

#ifndef UI_H //ifndef is a preprocessor directive
#define UI_H //

enum Move{LEFT, RIGHT, UP, DOWN, EXIT };

void start();
void welcomeMsg();
void printEnvironment();
Move getValidMove();
void processMove(Move);
void printLine();
void printRow(uint64_t);

#endif /* UI_H */

//called an include guard, only goes in header files
// only compile cpp files, not header files

//if not defined, then execute everything between line 1 and #endif

