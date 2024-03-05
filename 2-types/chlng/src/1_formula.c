
#include <stdio.h>

int main(int argc, char* args[])
{
	int a = 5;
	int b = 1;
	int x = 10;
	int y = 5;

	printf("a = %d\nb = %d\nx = %d\ny = %d\n\n",
				 a,	 	 b,		 x,		 y);
	puts("f = (a - b)(x - y)");
	printf("  = (%d - %d)(%d - %d)\n",
				  a,   b,  x,	y);
	printf("  = %d * %d\n", (a - b), (x - y));
	printf("  = %d\n", ((a-b)*(x-y)));

	return 0;
}
