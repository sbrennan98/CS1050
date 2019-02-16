#include <stdio.h>

int main(void)
{
        int a, b, sum, dif, pro, rem, absa, absb;
        float div;

        printf("Please enter the first integer.\n");
        scanf("%d", &a);
        printf("Please enter the second integer. Integer cannot be 0.\n");
        scanf("%d", &b);
        while (b==0)
        {
        printf("Please enter a number other than 0.\n");
        scanf("%d", &b);
        }
        printf("The values you entered are:\n");
                printf("a=%d \n", a);
                printf("b=%d \n", b);
        printf("\nHere are your calculations:\n");
        sum = a + b;
        dif = a - b;
        pro = a * b;
        div = (float) a / b;
        rem = a % b;
//      Extra Credit
        if (a < 0)
          absa = a * -1;
        if (a > 0)\
          absa = a;

        if (b < 0)
          absb = b * -1;
        if (b > 0)
          absb = b;

        printf("a + b = %d\n", sum);
        printf("a - b = %d\n", dif);
        printf("a * b = %d\n", pro);
        printf("a / b = %.2f\n", div);
        printf("Remainder = %d\n", rem);
//      Extra Credit
        if (absa == absb)
                printf("|a| = %d has the same absolute value as b.\n", absa);
        if (absa > absb)
                printf("|a| = %d has the largest absolute value.\n", absa);
        if (absa < absb)
                printf("|b| = %d has the largest absolute value.\n", absb);

        return 0;
}
