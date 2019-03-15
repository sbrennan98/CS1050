#include <stdio.h>

int main(void)
{
	int a=3;
	double b=3.25;
	printf("Value of A= Value of B=\n%12d%12.2f", a, b);
	//%12d means print data type integer 12 spaces out.
	//%12.2f means print data type double 12 spaces out.
	//As you can see, b has four spaces instead of a which only has 1.
}
