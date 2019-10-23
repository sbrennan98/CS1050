#include <stdio.h>
#include <stdlib.h>
#define NAME 15

struct _Player
{
	char firstName[NAME];
	char lastName[NAME];
	float average;
	float basePercent;
};

int FillArrays(struct _Player *players, int count, char *fileName);
void PrintArrays(struct _Player *players, int count);
int CountLines(char *fileName);

int main(int argc, char *argv[])
{
	printf("Arguments: Number_Of_Arguments Data_File_Name.type\n");
	if(argc<3)
	{
		printf("Not enough arguments given. Ending program...\n");
		return -1;
	}
	if(argc>3)
	{
		printf("Too many arguments given. Ending program...\n");
		return -1;
	}

	char *fileName=argv[2];
	int count=atoi(argv[1]);
	struct _Player players[CountLines(fileName)];
	PrintArrays(players, FillArrays(players, count, fileName));
}
int FillArrays(struct _Player *players, int count, char *fileName)
{
	FILE *fStats=fopen(fileName, "r");
	int i=0;
	while(!feof(fStats)&& i < count)
	{
		fscanf(fStats, "%s %s %f %f", players[i].firstName, players[i].lastName, &players[i].average, &players[i].basePercent);
		i++;
	}
	fclose(fStats);
	return i;
}
int CountLines(char *fileName)
{
	FILE *fPtr=fopen(fileName, "r");
	int lines=0;
	for(char c=getc(fPtr); c != EOF; c=getc(fPtr))
	{
		if(c=='\n')
		{
			lines++;
		}
	}
	fclose(fPtr);
	return lines;
}
void PrintArrays(struct _Player *players, int count)
{
	printf("%15s %15s %15s %15s\n%15s %15s %15s %15s\n", "First Name:","Last Name:","Average:", "Base Percent:","***********","**********","********", "************");
	for(int i=0; i<count; i++)
	{
		printf("%15s %15s %15f %15f\n", players[i].firstName, players[i].lastName, players[i].average, players[i].basePercent);
	}
}
