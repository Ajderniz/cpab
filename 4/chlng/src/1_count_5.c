
#include <stdio.h>

int main(int argc, char* args[])
{
	for (int iIndex = 5; iIndex <= 100; iIndex += 5) {
		printf("%03d\t", iIndex);
		if ((iIndex % 25) == 0) {
			puts("");
		} //end if
	} //end for
	return 0;
} //end main
