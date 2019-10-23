/*Name:		Sean Brennan
 *PawPrint:	slbvp6
 *Date:		04/17/2019
 *Assignment:	Lab_9
 */

#include <stdio.h>
#define NAMESCOUNT 9


int fillArrays(char firstNames[][256], char lastNames[][256], float avgs[], char *labstats);
void printArrays(char firstNames[][256], char lastNames[][256], float avgs[], int count);
//void sortArrays(char firstNames[][256], char lastNames[][256], float avgs[], int count);
//void swap();

int main(void)
{
	char firstNames[NAMESCOUNT][256];
	char lastNames[NAMESCOUNT][256];
	char labstats[]="labstats.dat";
	float avgs[NAMESCOUNT];
	int count;

	count=fillArrays(firstNames, lastNames, avgs, labstats);
	printArrays(firstNames, lastNames, avgs, count);
//	Bonus:
//	printf("\n*Bonus*\n");
//	sortArrays(firstNames, lastNames, avgs, count);
//	printArrays();
}

int fillArrays(char firstNames[][256], char lastNames[][256], float avgs[], char *labstats)
{
	int count=0;
	int i;
	FILE *fPtr;
	fPtr=fopen("labstats.dat", "r");
	if (labstats==NULL)
	{
		printf("Could not open file.\n");
		return -1;
	}
	fscanf(fPtr, "%d", &count);
	for(i=0;i<count;i++)
	{
		fscanf(fPtr, "%s %s", firstNames[i], lastNames[i]);
	}
	for(i=0;i<count;i++)
	{
		fscanf(fPtr, "%f", &avgs[i]);
	}
	fclose(fPtr);

	return count;
}
void printArrays(char firstNames[][256], char lastNames[][256], float avgs[], int count)
{
	for(int i=0;i<count;i++)
	{
		printf("%s %s: %f\n", firstNames[i], lastNames[i], avgs[i]);
	}
	
}
//void sortArrays()//bubble sort
//{
//	int i,j;
//	for(i=0;i<count;i++)
//	{
//		for(j=0;j<count;j++)
//		{
//			if 
//		}
//	}
//}

