#include <stdio.h>

int rep1(), rep2(), rep3();


int main(void)
{
//	rep1();
//	rep2();
	rep3();

	return 0;
}

int rep1()
	{
		int counter=1;
		while ( counter <= 10 )
			{
				printf("%d", counter);
				counter += 1;
			}
		return 0;
	}

int rep2()
	{
		int counter=0;
		while ( ++counter <= 10 )
			{
				printf("%d", counter);
			}
		return 0;
	}

int rep3()
	{
		int counter;
		for ( counter=1; counter<= 10; counter++ )
			{
				printf("%d", counter);
			}
		return 0;
	}
