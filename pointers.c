#include <stdio.h>
#include <stdlib.h>

void arrays(void);
void arrays2(void);

int main(void)
{
	int x = 2;

	/* Creates an integer pointer y and sets it equal to the address of x */
	int *y= &x;

	/* Sets z equal to the dereferenced value of y */
	int z = *y;

	printf("%d\n", z);
	arrays();
	arrays2();
return 0;
}

/* Uses array notation */
void arrays(void){
	int A[5];
	int i;
	for(i = 0; i < 5; i++){
		A[i] = i;
		printf("%d ", A[i]);
	}
	printf("\n");
}

/* Uses pointer notation */
void arrays2(void){
	int *A = malloc(5 * sizeof(int));
	int i;
	for(i = 0; i < 5; i++){
		*(A+i) = i;
		printf("%d ", *(A+i));
	}
	printf("\n");
}
