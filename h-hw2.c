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

#ifdef BONUS
enum HOTEL {Marriott, Hilton, BestWestern, HolidayInn, Motel6, Super8};
enum ROOM {StandardKing, Standard2Queen, QueenSuite, KingSuite, PresidentialSuite};
#endif

// Globals
const char const hotelNames[COUNTHOTELS][STRINGMAX] = {"Marriott", "Hilton", "Best Western", "Holiday Inn", "Motel 6", "Super 8"};
const char const roomNames[COUNTROOMTYPES][STRINGMAX] = {"Standard King", "Standard Two Queens", "Suite Two Queens", "Suite King", "Suite Presidential"};

int costMatrix[COUNTHOTELS][COUNTROOMTYPES]=
{
	{200,200,350,375,550},	// Marriott
	{180,210,325,350,600},	// Hilton
	{125,125,240,250,400},	// Best Western
	{130,135,250,275,450},	// Holiday Inn
	{119,119,239,249,399},	// Motel 6
	{118,118,240,247,389},	// Super 8
};

/***********************************************************/
/* Prototypes                                              */
/***********************************************************/
#ifdef BONUS
// GetHotelName - Given a hotel value, return a printable string
const char * const GetHotelName(enum HOTEL hotel);
// GetRoomName - Given a room value, return a printable string
const char * const GetRoomName(enum ROOM room);
// GetRoomPrice - Returns the price of a room at a particular hotel
int GetRoomPrice(enum HOTEL hotel, enum ROOM room);
// PrintHotelRoomsByHotel - Print rooms and prices at a given hotel
void PrintHotelRoomsByHotel(enum HOTEL hotel);
// PrintHotelsByRoom - Print hotels and prices for a given room type
void PrintHotelsByRoom(enum ROOM room);
// getMainMenuChoice - Display the main men
#else
const char * const GetHotelName(int hotel);
const char * const GetRoomName(int room);
int GetRoomPrice(int hotel, int room);
void PrintHotelRoomsByHotel(int hotel);
void PrintHotelsByRoom(int room);
#endif

// PrintHotelOptions - Prints a numbered list of hotels
void PrintHotelOptions();
// PrintRoomOptions - Prints a numbered list of room types
void PrintRoomOptions();
// PrintHotelRoomsLessThan - Prints rooms at all hotels that are priced less than some limit
void PrintHotelRoomsLessThan(int iLimit);
int getMainMenuChoice();
/***********************************************************/

int main(void)
{
	printf("Welcome to the Mizzou Accomodations Reservation System(MARS)!\n");
}
