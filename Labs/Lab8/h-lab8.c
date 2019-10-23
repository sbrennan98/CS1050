/*Name:		Sean Brennan
 *PawPrint:	slbvp6
 *Date: 04/10/2019
 *Assignment:	Lab_8
 */
#include <stdio.h>
#include <string.h>
#define ALPHATEST1 "abcd67890efghijk123z"
#define UPPERTEST1 "AbCDefghijKLMNOpqrSTUVwxyZ"
#define UPPERTEST2 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

//I tried using many of the c standard library functions in my program, but kept getting compiler error of "undeclared function" even though many online sources state the existence of the function in the c standard libraries. These functions include isalpha, strlwr, strcmpi(case insensitive string comparison), etc.


int isAlpha(char *s);
//int isLower(char *s);
//void toLower(char *s);
//void toDigits(char *s);

int main(void)
{
	char s1[]=ALPHATEST1;
	char s2[]=UPPERTEST1;
	char s3[]=UPPERTEST2;

	printf("Welcome to Lab 8.\nIn this program, we will practice using character and string functions in the C standard Library.\nWe will do this by testing three strings and if they are alphabetical, all uppercase, and extract any digits from them.\n\nHere are the three strings we will test:\ns1:%s\ns2:%s\ns3:%s\n", ALPHATEST1, UPPERTEST1, UPPERTEST2);	
	isAlpha(s1);
	isAlpha(s2);
	isAlpha(s3);
	
	
	return 0;
}

int isAlpha(char *s)
{	
	int i=0;

	while(i!='\0')
	{
		if((*s<65)||(*s>122))
			printf("This string is not entirely alphabetical.\n");
		s++;
	}
	return 0;
}
/*
int isUpper(char *s)
{
	int i;

	while(i!='\0')
	{
		if((*s>90)||(*s<65)
			printf("This string is not entirely uppercase.\n");
		i++;
	}
return 0;
}
void toUpper(char *s)
{
	strupr(s);
}

void toDigits(char *s)
{
	strtod(s);
}
*/
