
#include <stdio.h>

int main()
{
	int iFrom = 0;
	int iUntil = 0;
	int iStep = 0;

	printf("Start counting from: ");
	scanf("%d", &iFrom);

	printf("Count until: ");
	scanf("%d", &iUntil);

	printf("In increments of: ");
	scanf("%d", &iStep);

	//evaluar dinámicamente la dirección del conteo como positiva o negativa
	if (iFrom < iUntil) {
		for (int iIndex = iFrom; iIndex <= iUntil; iIndex += iStep) {
			printf("%03d\n", iIndex);
		} //end for
	} else {
		for (int iIndex = iFrom; iIndex >= iUntil; iIndex -= iStep) {
			printf("%03d\n", iIndex);
		}
	} //end if
	return 0;
} //end if
