
#include <stdio.h>

int main()
{
	int irNumbers[10] = {0};
	int iNumbersLenght = sizeof(irNumbers)/sizeof(irNumbers[0]);
	for (int iIndex = 0; iIndex < iNumbersLenght; iIndex++) {
		printf("%d\n", irNumbers[iIndex]);
	}
	return 0;
} //end if
