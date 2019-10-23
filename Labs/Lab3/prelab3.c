#include <stdio.h>

int factorial();

int main(void)
{
	printf("Hello! Welcome to the factorial calculator.\n");
	factorial();
}
int factorial()
{
	int integer=0;
	long unsigned int a, b=0;

	printf("Please enter an integer between 1-20\n");
	scanf("%d", &integer);
	while ( (integer > 20) || (integer < 1) )
	{
		printf("Please enter a valid integer.\n");
		scanf("%d", &integer);
	}
	for (a = 1; a < integer; a++)
	{
		b = 
		a *= a;
		printf("%lu", a);
	}
	return 0;
}
