#include <stdio.h>

int seanb(void);
int seanb2(void);
double clarkw(double, int);


int main(void)
{
	printf("Hello World!\n");
	seanb();
	seanb2();
	return 0;
}

int seanb(void)
{
	int four; //answer to question
	printf("What's 2+2?\n");
	scanf("%d", &four);
	while(four != 4){
		printf("Incorrect. Please try again.\n");
		scanf("%d", &four);
	}
	printf("Correct! Good work\n");
	return 0;
}

int seanb2(void)
{
	int four;
	do{
		printf("What's 2+2?\n");
		scanf("%d", &four);
	}
	while(four != 4);
	printf("Correct! Good work\n");
	return 0;
}

