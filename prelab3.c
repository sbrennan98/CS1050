#include <stdio.h>
#include <math.h>

int factorial();

int main(void)
	{
		int integer=0;
		printf("Hello. Welcome to the factorial calculator.\n");
		printf("Please enter the integer between 1-20 you'd like to calculate the factorial of:\n");
		scanf("%d", &integer);
		while ( (integer < 1) || (integer >= 20) )
		{
			printf("Please enter a valid integer:\n");
			scanf("%d", &integer);
		}
		factorial();
		return 0;
	}
int factorial()
	{
		int a=0;
		long unsigned int b=0;
		b = integer;
		for (a = (integer - 1); a >= 1; a--)
		{
			b = b * a;
			printf("%lu\n", b);
		}
		return 0;
	}
