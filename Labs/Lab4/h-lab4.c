/*
 *Name:		Sean Brennan
 *Pawprint:	slbvp6
 *Date:		2/27/2019
 *Assignment:	Recursive Functions - Lab_4
 */

#include <stdio.h>
#include <math.h>

double Power(double base, int exponent);
void DoTest(double base, int exponent);


int main(void)
{
	printf("**Welcome to the Power Calculation Test Program **\n\n");

	DoTest(1,1);
	DoTest(2,2);
	DoTest(1.05,10);
	DoTest(1.05,100);
	DoTest(-1,2);
	DoTest(-1.05,10);
	DoTest(5,101);
	DoTest(5.3,0);
	DoTest(5.7,-1);
}
double Power(double base, int exponent)
{
	if ( (exponent < 1) || (exponent > 100) )
	{
		return 1;
	}
	else
	{
		return (base * Power(base, exponent-1));
	}
}

void DoTest(double base, int exponent)
{
	double powvalue, Powervalue;
	powvalue = pow(base, exponent);
	Powervalue = Power(base, exponent);
	printf("Test Power(%lf, %d)", base, exponent);
	if (powvalue == Powervalue)
	{
		printf("Success!\n");
	}
	else
	{
		printf("Failed.\n");
	}
}



