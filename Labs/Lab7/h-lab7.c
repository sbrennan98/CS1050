#include <stdio.h>

void promptAndGetStrings(char *promptPtr, char *outputPtr);
unsigned int strLen(char *outputPtr);
//void reverseString(char *outputPtr);

int main(void)
{
	char output[3][256];
	char prompt[45]="Please enter three seperate strings:";
	char *outputPtr = output[0];
	char *promptPtr = prompt;
	int i;

	printf("Welcome to lab 7.\n");
	promptAndGetStrings(promptPtr, outputPtr);
	
	for(i=0;i<3;i++)
	{
		printf("output[i]=%s\n", output[i]);
	}
	for(i=0;i<3;i++)
	{
		strLen(outputPtr);
		printf("You entered: %s which has a length of: %u\n", output[i], strLen(output[i])); 
	}
/*
	for(i=0;i<3;i++)
	{
		reverseString(output[i]);
		printf("Reversed String: %s with length of: %u\n", output[i], strLen(ex[i]));
	}
*/
return 0;
}

void promptAndGetStrings(char *promptPtr, char *outputPtr)
{
	printf("%s\n", promptPtr);
	for(int i=0; i<3;i++)
	{
		scanf("%s", (outputPtr+i));
	}
}

unsigned int strLen(char *outputPtr)
{
	unsigned int length=0;
	for(int i=0; (outputPtr+i)!= NULL; i++)
	{
		length++;
	}
	
	return length;
}






