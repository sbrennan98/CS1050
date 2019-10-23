#include <stdio.h>

//int absolute(int);

int main(void)
{
int integer1;
int integer2;
int integer3;

printf("Please enter the first integer.\n");
scanf("%d", &integer1);

printf("Please enter the second integer.\n");
scanf("%d", &integer2);

printf("Please enter the third integer.\n");
scanf("%d", &integer3);

/*
 *	if (integer1 < 0)
 * 	integer1=integer1*-1;
 *
 *	if (integer2 < 0)
 *	integer2=integer2*-1;
 *	
 *	if (integer3 < 0)
 * 	integer3=integer3*-1;
 */
printf("Here's the absolute values:\n");
printf("%d\n", absolute(integer1));
//printf("%d\n", integer2);
//printf("%d\n", integer3);
/*
absolute(integer1);
absolute(integer2);
absolute(integer3);
*/
return 0;
}

int absolute(int n)
{
  if (n<0)
    return n*-1;
  return n;


}
