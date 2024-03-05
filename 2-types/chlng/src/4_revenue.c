
#include <stdio.h>

int main(int argc, char* args[])
{
	float fPrc, fQnt;

	puts("ITEM SELECTED");
	printf("PRICE: ");
	scanf("%f", &fPrc);
	printf("QUANTITY: ");
	scanf("%f", &fQnt);

	printf("REVENUE: %.2f G\n", (fPrc * fQnt));

	return 0;
}
