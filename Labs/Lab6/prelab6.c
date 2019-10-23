#include <stdio.h>

void getInt(int *);
void getFloat(float *);
void getString(char *);
// int getArray(int *);
// void printArray(int *);
void printValues(int *, float *);

int main(void)
{
	int a;
	float b;
	int *intPtr= &a;
	// *arrayPtr;
	float *floatPtr= &b;
	// char *stringPtr;

	printf("Welcome to prelab6.\n");
	getInt(intPtr);
	getFloat(floatPtr);
	// getString();
	// getArray();
	printValues(intPtr, floatPtr);

	return 0;
}
void getInt(int *intPtr)
{
	printf("Please enter an integer:\n");
	scanf("%d", intPtr);
}
void getFloat(float *floatPtr)
{
	printf("Please enter a float:\n");
	scanf("%f", floatPtr);
}
// void getString(char *stringPtr)
// {
// 	printf("Please enter a string:\n");
// 	scanf("%s", stringPtr);
// }
// int getArray()
// {
// 	int d[];
//
// 	printf("Please enter an array of positive integers(enter -1 to complete):\n");
// 	for (i=0; d[i]!=-1; i++)
// 	{
// 		scanf("%d", &d[i]);
// 	}
// }
// void printArray()
// {
// }
void printValues(int *intPtr, float *floatPtr)
{
	printf("Here are your values:\nInteger: %d\nFloat: %f\n",*intPtr,*floatPtr);
	// printArray();
}
