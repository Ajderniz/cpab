
#include <stdio.h>

int main(int argc, char* args[])
{
	for (int iIndex = 100; iIndex > 0; iIndex -= 10) {
		printf("%03d\t", iIndex);
		if ((iIndex % 60) == 0) {
			puts("");
		} //end if
	} //end for
	puts("");

	return 0;
} //end main
