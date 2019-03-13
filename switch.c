/*
 *	Name:		Sean Brennan
 *	Pawprint:	slbvp6
 *	Date:		02/15/2019
 *	CS1050 HW1:	Rental Car Billing
 */
#include <stdio.h>
#define TAX 8
//optimized version of homework 1
int interpedia();
int hurts();
int mavis();
int international();

//global variables needed to exist outside of functions. Global variables automatically initialized to 0 in C
int rtotal, rtax, rsubt;

int main(void)
{
	printf("Hello! Welcome to the Interpedia billing calculator.\n");
	interpedia();
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\nGrand Total: $%d\nThank you for using the Interpedia billing calculator!\n\n", (rtotal));
	return 0;
}

//Start of program function
int interpedia()
{
	int company=0;

	printf("Please enter the number corresponding to the rental company you prefer:\n(1)Hurts\n(2)Mavis\n(3)International\n");
	scanf("%d", &company);
	while ( (company != 1) && (company != 2) && (company != 3) )
 	{
	 	printf("Please enter a valid number.\n");
	 	scanf("%d", &company);
 	}

	switch (company)
	{
		case 1:
			printf("You've selected Hurts.\n");
			hurts();
			break;

		case 2:
			mavis();
			break;

		case 3:
			international();
			break;
	}
	return 0;
}

//Hurts Function
int hurts()
{
	int type=0, days=0;
	char loop='n';
	int econ=24, mid=31, full=64, lux=97, suv=75, mini=79;
	int subt=0, total=0,  tax=0;

	printf("Please enter the number that corresponds with the type of car you prefer:\n(1)Economy\n(2)Mid-Size\n(3)Full-Size\n(4)Luxury\n(5)SUV\n(6)Minivan\n");
	scanf("%d", &type);
	while ( (type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) )
	{
		printf("Please enter a valid number.\n");
		scanf("%d", &type);
	}

	if (type == 1)
	{
		printf("\nYou've selected Economy.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * econ);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", econ, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 2)
	{
		printf("\nYou've selected Mid-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mid);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mid, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 3)
	{
		printf("\nYou've selected Full-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * full);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", full, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 4)
	{
		printf("\nYou've selected Luxury.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * lux);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", lux, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 5)
	{
		printf("\nYou've selected SUV.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * suv);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", suv, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 6)
	{
		printf("\nYou've selected Minivan.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mini);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mini, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	return 0;
}

//Mavis Function
int mavis()
{
	int type=0, days=0;
	char loop='n';
	int econ=24, mid=24, full=65, lux=98, suv=50, mini=77;
	int subt=0, total=0,  tax=0;

	printf("\nYou've selected Mavis.\nPlease enter the number that corresponds with the type of car you prefer:\n(1)Economy\n(2)Mid-Size\n(3)Full-Size\n(4)Luxury\n(5)SUV\n(6)Minivan\n");
	scanf("%d", &type);
	while ( (type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) )
	{
		printf("Please enter a valid number.\n");
		scanf("%d", &type);
	}

	if (type == 1)
	{
		printf("\nYou've selected Economy.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * econ);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", econ, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 2)
	{
		printf("\nYou've selected Mid-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mid);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mid, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 3)
	{
		printf("\nYou've selected Full-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * full);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", full, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 4)
	{
		printf("\nYou've selected Luxury.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * lux);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", lux, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 5)
	{
		printf("\nYou've selected SUV.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * suv);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", suv, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 6)
	{
		printf("\nYou've selected Minivan.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mini);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mini, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	return 0;
}

//International Function
int international()
{
	int type=0, days=0;
	char loop='n';
	int econ=28, mid=30, full=67, lux=89, suv=50, mini=75;
	int subt=0, total=0,  tax=0;

	printf("\nYou've selected International.\nPlease enter the number that corresponds with the type of car you prefer:\n(1)Economy\n(2)Mid-Size\n(3)Full-Size\n(4)Luxury\n(5)SUV\n(6)Minivan\n");
	scanf("%d", &type);
	while ( (type != 1) && (type != 2) && (type != 3) && (type != 4) && (type != 5) && (type != 6) )
	{
		printf("Please enter a valid number.\n");
		scanf("%d", &type);
	}

	if (type == 1)
	{
		printf("\nYou've selected Economy.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * econ);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", econ, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 2)
	{
		printf("\nYou've selected Mid-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mid);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mid, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 3)
	{
		printf("\nYou've selected Full-Size.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * full);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", full, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 4)
	{
		printf("\nYou've selected Luxury.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * lux);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", lux, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 5)
	{
		printf("\nYou've selected SUV.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * suv);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", suv, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	if (type == 6)
	{
		printf("\nYou've selected Minivan.\nPlease enter how many days you'd like to rent the vehicle.\n");
		scanf("%d", &days);
		while (days <= 0)
		{
			printf("Please enter a valid number of days.\n");
			scanf("%d", &days);
		}
		subt = (days * mini);
		tax = (((subt * TAX) + 50) / 100);
		total = (subt + tax);
		rtotal = (rtotal + total);
		rsubt = (rsubt + subt);
		rtax = (rtax + tax);
		printf("\nDaily Rate: $%d\nSubtotal: $%d\nTax: $%d\nTotal: $%d\n\nRunning Subtotal: $%d\nRunning Tax: $%d\nRunning Total: $%d\nWould you like to add another vehicle? [y/n]\n", mini, subt, tax, total, rsubt, rtax, rtotal);
		scanf(" %c", &loop);
		while ((loop != 'y') && (loop != 'n') && (loop != 'Y') && (loop != 'N'))
		{
			printf("Please enter a valid character. [y/n]\n");
			scanf(" %c", &loop);
		}
		if ((loop == 'y') || (loop == 'Y'))
		{
			printf("\n");
			interpedia();
		}
		return 0;
	}
	return 0;
}
