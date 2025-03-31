#ifndef RPSVL_GAME_H
#define RPSVL_GAME_H

/**
 *  displays game menu and rules
 *  @param response the input to determine 
 *         if RPSVL will be played
 */
void displayMenu(char&);

/**
 *  validates user input is y or n.
 *  @param letter the character the user inputs
 *  @return if letter does not match y or n 
 *          return false, otherwise return true
 */
bool validateChoice(char&);

/**
 *  computer generates a random number between 1 and 5
 *  @param compChoice random number will be stored in compChoice
 */
void getRandomChoice(int&);

/**
 *  displays game option menu and gets users choice for RPSVL
 *  @param choice the integer that corresponds to
 *         one of the letters for R/P/S/V/L
 */
void getUserChoice(int&);

/**
 *  validates user input is R/P/S/V/L
 *  @param letter the character the user inputs
 *  @return if letter does not match one of the five characters
 *          return false, otherwise return true
 */
bool validateInput(char);

/**
 *  uses the input from the computer and user
 *  to determine which function to call
 *  @param user the option the user chose
 *  @param computer the option the computer generated
 */
void round(int, int);

/**
 *  Displays what the user and computer chose
 *  and determines the winner for RPSVL
 *  @param user the integer the user chose
 */
void rock(int);

/**
 *  Displays what the user and computer chose
 *  and determines the winner for RPSVL
 *  @param user the integer the user chose
 */
void paper(int);

/**
 *  Displays what the user and computer chose
 *  and determines the winner for RPSVL
 *  @param user the integer the user chose
 */
void scissors(int);

/**
 *  Displays what the user and computer chose
 *  and determines the winner for RPSVL
 *  @param user the integer the user chose
 */
void vader(int);

/**
 *  Displays what the user and computer chose
 *  and determines the winner for RPSVL
 *  @param user the integer the user chose
 */
void luke(int);

/**
 *  Displays what option the user chose
 *  @param user the integer the user chose
 */
void displayUserChoice(int);

/**
 *  Asks the user if they want to play RPSVL again
 *  @param again the character the user inputs
 */
void playAgain(char&);

#endif