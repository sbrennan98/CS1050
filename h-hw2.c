/*******************************************************
 * Name:		Sean Brennan
 * PawPrint:	slbvp6
 * Date:		03/05/2019
 * CS1050 HW2:	Mizzou Accomodations Reservation System
 *******************************************************/
#include <stdio.h>
#define COUNTHOTELS 6
#define COUNTROOMTYPES 5
#define STRINGMAX 64
#define LOWEST 118

//Global Variables
const char hotelNames[COUNTHOTELS][STRINGMAX] = {"Marriott", "Hilton", "Best Western", "Holiday Inn", "Motel 6", "Super 8"};
const char roomNames[COUNTROOMTYPES][STRINGMAX] = {"Standard King", "Standard Two Queens", "Suite Two Queens", "Suite King", "Suite Presidential"};
int costMatrix[COUNTHOTELS][COUNTROOMTYPES]=
{
	{200,200,350,375,550},	// Marriott
	{180,210,325,350,600},	// Hilton
	{125,125,240,250,400},	// Best Western
	{130,135,250,275,450},	// Holiday Inn
	{119,119,239,249,399},	// Motel 6
	{118,118,240,247,389},	// Super 8
};

//Prototypes
void PrintHotelRoomsByHotel(int hotel);
void PrintHotelsByRoom(int room);
void PrintHotelOptions();
void PrintRoomOptions();
void PrintHotelRoomsLessThan(int iLimit);
int getMainMenuChoice();
int askLimit();

//The program is a tad DRY but I ran out of time to 'functionalize' it.
int main(void)
{
	printf("Welcome to the Mizzou Accomodations Reservation System(MARS)\n\n");
	getMainMenuChoice();

	return 0;
}
int getMainMenuChoice()
{
	int menuchoice, hotel, room;
	printf("Main Menu:\n(1)Display by Hotel\n(2)Display by Room Type\n(3)Display by Price Limit\n(4)Exit Program\n\nPlease make a selection:\n");
	scanf("%d", &menuchoice);
	while ((menuchoice<1)||(menuchoice>4))
	{
		printf("*Error*: Please enter a valid number.\n");
		scanf("%d", &menuchoice);
	}
	switch (menuchoice)
	{
		case 1: PrintHotelOptions();
			scanf("%d", &hotel);
			while ((hotel<1)||(hotel>COUNTHOTELS))
			{
				printf("*Error*: Please enter a valid number.\n");
				scanf("%d", &hotel);
			}
			PrintHotelRoomsByHotel(hotel);
			break;
		case 2: PrintRoomOptions();
			scanf("%d", &room);
			while ((room<1)||(room>COUNTROOMTYPES))
			{
				printf("*Error*: Please enter a valid number.\n");
				scanf("%d", &room);
			}
			PrintHotelsByRoom(room);
			break;
		case 3: askLimit();
			break;
		default: return 0;
	}
	return 0;
}
void PrintHotelOptions()
{
	int i;
	printf("\nHotels:\n");
	for (i=0; i<COUNTHOTELS; i++)
	{
		printf("(%d) %s\n", i+1, hotelNames[i]);
	}
	printf("Please select a hotel:\n");
}
void PrintRoomOptions()
{
	int i;
	printf("\nRooms:\n");
	for (i=0; i<COUNTROOMTYPES; i++)
	{
		printf("(%d) %s\n", i+1, roomNames[i]);
	}
	printf("Please select a room:\n");
}
int askLimit()
{
	int iLimit;
	printf("Enter the maximum price in dollars you wish to pay:\n");
	scanf("%d", &iLimit);
	if (iLimit<LOWEST)
	{
		printf("I'm sorry, we do not offer any rooms less than or equal to $%d. Going back to main menu...\n\n", iLimit);
		getMainMenuChoice();
	}
	else PrintHotelRoomsLessThan(iLimit);
	return 0;
}
void PrintHotelRoomsByHotel(int hotel)
{
	int i;
	printf("\nRooms at %s:\n", hotelNames[hotel-1]);
	for (i=0; i<COUNTROOMTYPES; i++)
	{
		printf("%s - $%d\n", roomNames[i], costMatrix[hotel-1][i]);
	}
}
void PrintHotelsByRoom(int room)
{
	int i;
	printf("\nHotels with %s:\n", roomNames[room-1]);
	for (i=0; i<COUNTHOTELS; i++)
	{
		printf("%s: %s-$%d\n", hotelNames[i], roomNames[room-1], costMatrix[i][room-1]);
	}
}
void PrintHotelRoomsLessThan(int iLimit)
{
	int i, j;
	printf("Rooms less than or equal to $%d:\n", iLimit);
	for (i=0; i<COUNTHOTELS; i++)
	{
		for (j=0; j<COUNTROOMTYPES; j++)
		{
			if (costMatrix[i][j]<=iLimit)
			{
				printf("%s: %s-$%d\n", hotelNames[i], roomNames[j], costMatrix[i][j]);
			}
		}
	}
}
