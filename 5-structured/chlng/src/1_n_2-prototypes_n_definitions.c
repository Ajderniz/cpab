
#include <stdio.h>

float fDivide(const float fDividend, const float fDivisor);
int iFindLarger(const int iNumber1, const int iNumber2);
void vPrintMenu(void);

int main(void)
{
	return 0;
} //end if

float fDivide(const float fDividend, const float fDivisor)
{
	if (fDividend == 0 || fDivisor == 0)
		return NULL;

	return fDividend / fDivisor;
}

int iFindLarger(const int iNumber1, const int iNumber2)
{
	return (iNumber1 > iNumber2) ? iNumber1 : iNumber2;
}

void vPrintMenu(void)
{
	puts("Display balance");
	puts("Deposit funds");
	puts("Transfer funds");
	puts("Withdraw funds");
}
