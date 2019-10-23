#include <stdio.h>

int fillArrays(char names[][256], float avgs[], char *fileName);
void printArrays(char names[][256], float avgs[], int count);

int main(void)
{
	char names[][256];
	float avgs;
	char *prelabstats;
	prelabstats=fopen("prelabstats.dat", "r");

	fillArrays(names, avgs, prelabstats);


}
int fillArrays(char names[][256], float avgs[], char *prelabstats)
{
	int count;
	FILE *fPtr;
	fPtr=fopen("prelabstats.dat", "r");

	if (fPtr == NULL)
	{
		printf("Could not open file.\n");
	}
	else
	{

	}
}
void printArrays(char names[][256], float avgs[], int count)
{

}
