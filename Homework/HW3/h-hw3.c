/*****************************************************************************
 * Name:		Sean Brennan
 * PawPrint:	slbvp6
 * Date:		04/25/2019
 * CS1050 HW3:	Mizzou Accomodations Reservation System 2.0 (MARS 2.0)
 *****************************************************************************/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
// Symbolic Constants
#define MAXNAME 256
// Globals
int g_countHotels = 0;
int g_countRooms = 0;
char ** g_hotelNames;
char ** g_roomNames;
int ** g_costMatrix;
// Prototypes similar to HW2
int menu();
const char * const GetHotelName(int hotel);
const char * const GetRoomName(int room);
void PrintHotelOptions();
void PrintRoomOptions();
int GetLimit();
void PrintHotelRoomsLessThan(int iLimit);
int GetMainMenuChoice();
int GetRoomPrice(int hotel, int room);
void PrintHotelRoomsByHotel(int hotel);
void PrintHotelsByRoom(int room);
int SelectHotel();
int SelectRoom();
// New Prototypes
int LoadHotelNames(char * sFileName);
int LoadRoomNames(char * sFileName);
int LoadCostMatrix(char * sFileName);
void PrintCostMatrix();
void PrintHotelNames();
void PrintRoomNames();
// int FindLowest(); //Some additional functionality, finds the lowest value in the cost matrix, ran out of time to write and implement
// Start Of Program
int main(int argc, char *argv[])
{
	printf("(Arguments: Hotels_File Rooms_File Matrix_File)\n\n");
	if(argc>4)
	{
		printf("Too many arguments given...\n");
		return -1;
	}
	if(argc<4)
	{
		printf("Not enough arguments given...\n");
		return -1;
	}

	char *hotels=argv[1];
	char *rooms=argv[2];
	char *matrix=argv[3];
	int choice=0;

	printf("Welcome to MARS 2.0!\n");
	LoadHotelNames(hotels);
	LoadRoomNames(rooms);
	LoadCostMatrix(matrix);
	PrintHotelNames();
	PrintRoomNames();
	PrintCostMatrix();
	menu(choice);
	return 0;
}
int menu()
{
	printf("\nPlease make a selection:\n(1)Display by Hotel\n(2)Display by Room Type\n(3)Display by Price Limit\n(4)Exit Program\n");
	switch (GetMainMenuChoice())
	{
		case 1:
			PrintHotelOptions();
			PrintHotelRoomsByHotel(SelectHotel());
			break;
		case 2:
			PrintRoomOptions();
			PrintHotelsByRoom(SelectRoom());
			break;
		case 3:
			PrintHotelRoomsLessThan(GetLimit());
			break;
		case 4:
			return 0;
			break;
		default: return 0;
	}
	return 0;
}
const char * const GetHotelName(int hotel)
{
	return g_hotelNames[hotel];
}
const char * const GetRoomName(int room)
{
	return g_roomNames[room];
}
void PrintHotelOptions()
{
	int i;
	printf("\nHotels:\n");
	for (i=0; i<g_countHotels; i++)
	{
		printf("(%d) %s\n", i+1, GetHotelName(i));
	}
	printf("Please select a hotel:\n");
}
void PrintRoomOptions()
{
	int i;
	printf("\nRooms:\n");
	for (i=0; i<g_countRooms; i++)
	{
		printf("(%d) %s\n", i+1, GetRoomName(i));
	}
	printf("Please select a room:\n");
}
int GetLimit()
{
	int limit;
	printf("Please enter your budget in dollars:\n");
	scanf("%d", &limit);
	// if(limit<FindLowest())
	// {
	// 	printf("I'm sorry, we do not offer any rooms that match your budget.\nGoing back to main menu...\n\n");
	// 	menu();
	// }
	return limit;
}
void PrintHotelRoomsLessThan(int limit)
{
	printf("Rooms less than or equal to $%d:\n", limit);
	for (int i=0; i<g_countHotels; i++)
	{
		for (int j=0; j<g_countRooms; j++)
		{
			if (GetRoomPrice(i,j)<=limit)
			{
				printf("%s: %s-$%d\n", GetHotelName(i), GetRoomName(j), GetRoomPrice(i,j));
			}
		}
	}
}
int GetMainMenuChoice()
{
	int choice;
	scanf("%d", &choice);
	while ((choice<1)||(choice>4))
	{
		printf("*Error*: Please enter a valid number.\n");
		scanf("%d", &choice);
	}
	return choice;
}
int GetRoomPrice(int hotel, int room)
{
	return g_costMatrix[hotel][room];
}
void PrintHotelRoomsByHotel(int hotel)
{
	printf("\nRooms at %s:\n", GetHotelName(hotel));
	for (int i=0; i<g_countRooms; i++)
	{
		printf("%s - $%d\n", GetRoomName(i), GetRoomPrice(hotel, i));
	}
}
void PrintHotelsByRoom(int room)
{
	printf("\nHotels with %s:\n", GetRoomName(room));
	for (int i=0; i<g_countHotels; i++)
	{
		printf("%s: %s-$%d\n", GetHotelName(i), GetRoomName(room), GetRoomPrice(i, room));
	}
}
int SelectHotel()
{
	int hotel;
	scanf("%d", &hotel);
	if((hotel<0)||(hotel>g_countHotels))
	{
		printf("Please make a valid selection.\n");
		PrintHotelOptions();
	}
	return hotel;
}
int SelectRoom()
{
	int room;
	scanf("%d", &room);
	if((room<0)||(room>g_countRooms))
	{
		printf("Please make a valid selection.\n");
		PrintRoomOptions();
	}
	return room;
}
//New functions
int LoadHotelNames(char *sFileName)
{
	FILE *hotels=fopen(sFileName, "r");
	if(hotels!=NULL)
	{
		fscanf(hotels, "%d", &g_countHotels);
		g_hotelNames=(char **)malloc(g_countHotels * sizeof(char *));
		for(int i=0; i<g_countHotels; i++)
		{
			g_hotelNames[i]=(char *)malloc(MAXNAME*sizeof(char));
			fscanf(hotels, "%s", g_hotelNames[i]);
		}
		fclose(hotels);
		return 0;
	}
	else
	{
		printf("Error! Could not load hotels.\n");
		return -1;
	}
	return 0;
}
int LoadRoomNames(char *sFileName)
{
	FILE *rooms=fopen(sFileName, "r");
	if(rooms!=NULL)
	{
		fscanf(rooms, "%d", &g_countRooms);
		g_roomNames=(char **)malloc(g_countRooms * sizeof(char *));
		for(int i=0; i<g_countRooms; i++)
		{
			g_roomNames[i]=(char *)malloc(MAXNAME*sizeof(char));
			fscanf(rooms, "%s", g_roomNames[i]);
		}
		fclose(rooms);
		return 0;
	}
	else
	{
		printf("Error! Could not load rooms.\n");
		return -1;
	}
	return 0;
}
int LoadCostMatrix(char *sFileName)
{
	FILE *matrix=fopen(sFileName, "r");
	if(matrix!=NULL)
	{
		g_costMatrix= (int **)malloc(g_countHotels* sizeof(int *));
		for(int i=0; i<g_countHotels; i++)
		{
			g_costMatrix[i] = (int *)malloc(g_countRooms*sizeof(int));
			for(int j=0; j<g_countRooms; j++)
			{
				fscanf(matrix, "%d", &g_costMatrix[i][j]);
			}
		}
		fclose(matrix);
		return 0;
	}
	else
	{
		printf("Error! Could not load rooms.\n");
		return -1;
	}
	return 0;
}
void PrintHotelNames()
{
	printf("\nHotel Names:\n--------------\n");
	for(int i=0; i<g_countHotels; i++)
	{
		printf("%s\n", GetHotelName(i));
	}
}
void PrintRoomNames()
{
	printf("\nRoom Names:\n--------------\n");
	for(int i=0; i<g_countRooms; i++)
	{
		printf("%s\n", GetRoomName(i));
	}
}
void PrintCostMatrix()
{
	printf("\nCost Matrix:\n--------------\n");
	for(int i=0; i<g_countHotels; i++)
	{
		for(int j=0; j<g_countRooms; j++)
		{
			printf("%s, %s = %d\n", GetHotelName(i), GetRoomName(j), GetRoomPrice(i,j));
		}
	}
}
// int FindLowest() //ran out of time to write and implement
// {
//
// }
