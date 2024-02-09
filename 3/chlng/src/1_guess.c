
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char* args[])
{
	int iRandN = 0;
	char cResp = '\0';

	srand(time(0));

	iRandN = (rand() % 10);

	printf("Guess the gosh dang number (it's %d): ", iRandN);
	scanf("%c", &cResp);

	if (!isdigit(cResp)) {
		puts("That ain't no number I know of, sir.");
		return 0;
	} //end if

	puts("You've... actually entered a number. How gullible.");
	if (iRandN != (cResp - '0')) {
		puts("Still, the number you guessed wasn't the one. Tough luck.");
		return 0;
	} //end if

	printf("Tha's rite. The number was %d.\n", iRandN);

	return 0;
} //end main
