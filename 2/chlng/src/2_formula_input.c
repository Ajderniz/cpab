
#include <stdio.h>

int main(int argc, char* args[])
{
	int iA, iB, iX, iY;

	printf("a = ");
	scanf("%d", &iA);
	printf("b = ");
	scanf("%d", &iB);
	printf("x = ");
	scanf("%d", &iX);
	printf("y = ");
	scanf("%d", &iY);

	puts("\nf = (a - b)(x - y)");
	printf("  = (%d - %d)(%d - %d)\n",
				 iA,  iB, iX,  iY);
	printf("  = %d * %d\n", (iA - iB), (iX - iY));
	printf("  = %d\n", ((iA-iB)*(iX-iY)));

	return 0;
}
