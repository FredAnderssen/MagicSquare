/*
 * Information about sourcedevelopment
 * -----------------------------------
 * Initial creator:
 * Date created:
 * Last updated by:
 * Date for update:
 */

/*
 * File:
 * ------------------------
 * This program ...
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myIOLib.h"
#include "DivLib.h"
#include "genlib.h"

/*
 * Constants
 * ---------
 * Describe constants...
 */

//#define ...
#define SIZE 4

/* Function prototypes */
void giveInstructions(void);



/* Main program */
int main(void)
{
  int matrix[SIZE][SIZE];

  //int diaSum, rowSum, colSum;

	giveInstructions();
  prntMenu();

	return 0;
}














void giveInstructions(void)
{
	printTxtFile("title.txt");
  printf("\n\n Click anywhere to continue.. \n");
  getchar();
}

/*
* Function: ...
* Usage: ...
* --------------------------
* ...
*/
