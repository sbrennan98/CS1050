/*******************************************************
 * Name:		Sean Brennan
 * PawPrint:	slbvp6
 * Date:		03/05/2019
 * CS1050 HW2:	Mizzou Accomodations Reservation System
 *******************************************************/
#include <stdio.h>
#define BONUS
#define COUNTHOTELS 6
#define COUNTROOMTYPES 5
#define STRINGMAX 64
#define LOWEST 118

enum HOTEL {Marriott, Hilton, BestWestern, HolidayInn, Motel6, Super8};
enum ROOM {StandardKing, Standard2Queen, QueenSuite, KingSuite, PresidentialSuite};

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


// // GetHotelName - Given a hotel value, return a printable string
// const char * const GetHotelName(enum HOTEL hotel);
// // GetRoomName - Given a room value, return a printable string
// const char * const GetRoomName(enum ROOM room);
// // GetRoomPrice - Returns the price of a room at a particular hotel
// int GetRoomPrice(enum HOTEL hotel, enum ROOM room);
// // PrintHotelRoomsByHotel - Print rooms and prices at a given hotel
// void PrintHotelRoomsByHotel(enum HOTEL hotel);
// // PrintHotelsByRoom - Print hotels and prices for a given room type
// void PrintHotelsByRoom(enum ROOM room);
// // PrintHotelOptions - Prints a numbered list of hotels
void PrintHotelOptions();
// PrintRoomOptions - Prints a numbered list of room types
void PrintRoomOptions();
// PrintHotelRoomsLessThan - Prints rooms at all hotels that are priced less than some limit
void PrintHotelRoomsLessThan(int iLimit);
int getMainMenuChoice();
int askLimit();
/***********************************************************/

int main(void)
{
	printf("Welcome to the Mizzou Accomodations Reservation System(MARS)\n\n");
	getMainMenuChoice();

	return 0;
}
int getMainMenuChoice()
{
	int menuchoice;
	printf("Main Menu:\n(1)Display by Hotel\n(2)Display by Room Type\n(3)Display by Price Limit\n(4)Exit Program\n");
	scanf("%d", &menuchoice);
	while ((menuchoice<1)||(menuchoice>4))
	{
		printf("*Error*: Please enter a valid number.\n");
		scanf("%d", &menuchoice);
	}
	switch (menuchoice)
	{
		case 1: PrintHotelOptions();
			break;
		case 2: PrintRoomOptions();
			break;
		case 3: askLimit();
			break;
		case 4: return 0;
			break;
	}
	return 0;
}
void PrintHotelOptions()
{
	int i, menuchoice;
	printf("Please make a selection:\n");
	for (i=0; i<COUNTHOTELS; i++)
	{
		printf("(%d) %s\n", i+1, hotelNames[i]);
	}
	scanf("%d", &menuchoice);
}
void PrintRoomOptions()
{
	int i, menuchoice;
	printf("Please make a selection:\n");
	for (i=0; i<COUNTROOMTYPES; i++)
	{
		printf("(%d) %s\n", i+1, roomNames[i]);
	}
	scanf("%d", &menuchoice);
}
int askLimit()
{
	int iLimit;
	printf("Enter the maximum price in dollars you wish to pay:\n");
	scanf("%d", &iLimit);
	if (iLimit<LOWEST)
	{
		printf("I'm sorry, we do not offer any rooms less than or equal to $%d. Going back to main menu...\n", iLimit);
		getMainMenuChoice();
	}
	PrintHotelRoomsLessThan(iLimit);
	return 0;
}
void PrintHotelRoomsLessThan(int iLimit)
{
	printf("Rooms less than $%d:\n", iLimit);
}
