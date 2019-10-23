/*
 *Name:		Sean Brennan
 *Pawprint:	slbvp6
 *Date:		02/20/2019
 *CS1050 Lab_3:	Summations Calculator	
 */

#include <stdio.h>

int sum();

int main(void)
{
	printf("Hello! Welcome to the Summations Calculator.\n");
	sum();
}
int sum()
{
	int integer=0, a=0, b=0, again=0, save=0;

	do {
		printf("Please enter the high limit of the summation you wish to calculate.\n");
		scanf("%d", &integer);
	} while (integer < 1);
	for (a=1; a <= integer; a++)
	{
		b += a;
		printf("Summation(0..%d)= %d\n", a, b);
		if (b > save)
		{
			save = b;
		}
	}
	printf("\nEnter 0 to quit or 1 to continue.\n");
	scanf("%d", &again);
	switch (again)
	{
		case 0: //end program
			printf("The largest summation that you calculated was %d.\n", save);
			return 0;
			break;
		case 1: //loop program back to function sum()
			sum();
			break;
	}
	return 0;
}




