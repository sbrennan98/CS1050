#include <stdio.h>
#define AMOUNT 8

int input();
int average(float multi[][AMOUNT], int test, int student);
// int printavg(int average[]);

int main(void)
{
	input();
	return 0;
}
int input()
{
	float multi[3][AMOUNT]={0};
	int test, student;

	for (test = 0; test < 3; test++)
	{
		printf("Please enter the scores for Test #%d:\n", test+1);
		for (student=0; student<AMOUNT; student++)
		{
			scanf("%f",&multi[test][student]);
			while ((multi[test][student]>105) || (multi[test][student]<0))
			{
				printf("Enter a valid score:\n");
				scanf("%f",&multi[test][student]);
			}
		}
	}
	average(multi, test, student);
	return 0;
}
int average(float multi[][AMOUNT], int test, int student)
{
	int average[3]={0};

	for (test=0; test < 3; test++)
	{
		for (student=0; student < AMOUNT; student++)
		{
			average[test]+=multi[test][student];
		}
		average[test]=average[test]/AMOUNT;
		printf("Test #%d Average: %d\n", test+1, average[test]);
	}
	// printavg(average);
	return 0;
}
// int printavg(int average[])
// {
// 	int test;
// 	for (test=0;test<3;test++)
// 	{
// 		printf("Test #%d Average: %d\n",test+1,average[test]);
// 	}
// 	return 0;
// }
