
#include <stdio.h>

int main(int argc, char* args[])
{
	float fSalPrc, fCost, fRate;

	puts("COMMISSION CALCULATOR");
	printf("SALES PRICE: ");
	scanf("%f", &fSalPrc);
	printf("COST: ");
	scanf("%f", &fCost);
	printf("RATE: ");
	scanf("%f", &fRate);
	printf("COMMISSION: %.2f G\n", (fRate * (fSalPrc - fCost)));

	return 0;
}
