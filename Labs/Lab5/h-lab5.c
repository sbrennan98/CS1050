/*
 *Name:		Sean Brennan
 *Pawprint:	slbvp6
 *Date:		3/6/2019
 *Assignment:	Lab 5: Arrays
 */

#include <stdio.h>
#define LIMIT 10

void InitArraySquare(int array[LIMIT]);
void InitArrayLinear(int array[LIMIT]);
void PrintArray(int array1[LIMIT]);
void PrintArray2(int array2[LIMIT]);
/*
void SumArrays(int array1[], int array2[], int size);
void MultArrays(int array1[], int array2[], int size);
*/

int main(void)
{
	int array1[LIMIT] = {0,1,2,3,4,5,6,7,8,9};
	InitArraySquare(array1);
	int array2[LIMIT] = {0,1,2,3,4,5,6,7,8,9};
	InitArrayLinear(array2);
}
void InitArraySquare(int array1[LIMIT])
{
	int i;
	for (i = 0; i < LIMIT; i++)
	{
		array1[i]=(i*i);
	}
	PrintArray(array1);
}
void InitArrayLinear(int array2[LIMIT])
{
	int i;
	for (i = 0; i < LIMIT; i++)
	{
		array2[i]=i;
	}
	PrintArray(array2);
}
void PrintArray(int array1[LIMIT])
{
	int i;
	printf("Array:\n");
	for (i = 0;i < LIMIT; i++)
	{
		printf("%d\n", array1[i]);
	}
}
void PrintArray2(int array2[LIMIT])
{
	int i;
	printf("Array:\n");
	for (i = 0; i < LIMIT; i++)
	{
		printf("%d\n", array2[i]);
	}
}


//ran out of time





