
#include <stdio.h>

int main(int argc, char* args[])
{
	printf("01\n");
	printf("03\n");
	/* \r devuelve el cursor al 
	 * inicio de la linea actual, 
	 * borrando todo a su paso */
	printf("\r");
	printf("02\n");
	return 0;
}
