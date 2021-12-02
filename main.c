/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  robotPrintAscii();
  if(argc > 1) {
  char c = *argv[1];
    if(isdigit(c)) {
    dalekPrintAscii();
  robotPrintMessage();
  }
  }

  return 0;
}
