
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char* args[])
{
	int iRandN = 0;
	int iResp = 0;

	srand(time(0));

	iRandN = (rand() % 10) + 1;

	printf("Guess the gosh dang number: ");
	scanf("%c", &iResp);

	if (!isdigit(iResp)) {
		puts("That ain't no number I know of, sir.");
		return 0;
	} //end if

	puts("You've... actually entered a number. How gullible.");
	if (iRandN != iResp) {
		puts("Still, the number you guessed wasn't the one. Tough luck.");
		return 0;
	} //end if

	printf("Tha's rite. The number was %d.\n", iRandN);

	return 0;
} //end main
