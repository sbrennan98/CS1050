#include <stdio.h>
#define SAMPLE 15

int displaySampleSize(int sampleSize[]);
int display(int sampleSize[]);

int main(void)
{
	int sampleSize[SAMPLE], Frequency[10]={0}, i;
	printf("Enter %d ratings on a scale of 1-10:\n", SAMPLE);
	for (i = 0; i < SAMPLE; i++)
	{
		scanf("%d", &sampleSize[i]);
		while ( (sampleSize[i] < 1) || (sampleSize[i] > 10))
		{
			printf("Enter a valid rating:\n");
			scanf("%d", &sampleSize[i]);
		}
		Frequency[sampleSize[i]-1]++;
	}
	display(Frequency);
return 0;
}
int displaySampleSize(int sampleSize[])
{
	int i;
	for (i = 0; i < SAMPLE; i++)
	{
		printf("Value %d: %d\n",(i+1),sampleSize[i]);
	}
return 0;
}

int display(int Frequency[])
{
	int i, h;
	printf("Rating: # of rates: Histogram: \n");
	for (i=0; i < 10; i++)
	{
		printf("%7d%12d          ",i+1,Frequency[i]);
		for (h=0; h<Frequency[i]; h++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
