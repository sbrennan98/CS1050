#include <stdio.h>
#define NAME 24

struct _Player
{
	char *firstName[NAME];
	char *lastName[NAME];
	float average;
};

int FillArrays(struct _Player *players, char *fileName);
void PrintArrays(struct _Player *players, int count);


int main(void)
{
	char *fileName="prlelab10stats.dat";
	struct _Player players[25];
	printf("Welcome\n");
	PrintArrays(players, FillArrays(players, fileName));
}
int FillArrays(struct _Player *players, char *fileName)
{
	FILE *fStats=fopen(fileName, "r");
	int count=0;
	while(!feof(fStats))
	{
		fscanf(fStats, "%s %s %f", players[count].firstName, players[count].lastName, &players[count].average);
		count++;
	}
	fclose(fStats);
	return count;
}
void PrintArrays(struct _Player *players, int count)
{
	printf("%s %25s %25s\n%s %25s %25s\n", "First Name:","Last Name:","Average:","***********","**********","********");
	for(int i=0; i<count; i++)
	{
		printf("%s %25s %25f\n", players[i].firstName, players[i].lastName, players[i].average);
	}
}
