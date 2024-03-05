
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* args[])
{
	int iDie1 = 0;
	int iDie2 = 0;
	int iDieSum = 0;

	srand(time(0));

	puts("I don't remember the name of this game.");

	iDie1 = (rand() % 6) + 1;
	iDie2 = (rand() % 6) + 1;
	iDieSum = iDie1 + iDie2;

	if (iDieSum == 7 || iDieSum == 11) {
		printf("\nWould ya look at that! You scored %d, so you win, I guess.\n",
				iDieSum);
	} else {
		printf("\nYou scored %d.Therefore, you don't win.\n", iDieSum);
		puts("In fact, you lose.");
		puts("You suck.");
		puts("You ought to be ashamed of yourself.");
	} //end if

	puts("\nThanks for playing. Bye.");

	return 0;
} //end main
