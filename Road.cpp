#include "Road.h"
#include "Car.h"
#include <iostream>
using namespace std;



//-----------------------------------constructors----------------------------
Road::Road(){}
Road::Road(char Road_Type, int Speed_Limit)
{
	setRoad_Type(Road_Type);
	setSpeed_Limit(Speed_Limit);
	
}

//-----------------------------------setters w/ input validation---------------
void Road::setRoad_Type(char R_Type)
{
	R_Type = toupper(R_Type);

	while (R_Type != 'A' && R_Type != 'B' && R_Type != 'C')
	{
		cout << "\nERROR! " << R_Type << " is an invalid road name" << endl;
		cout << "Please enter a valid road type(A/B/C): ";
		cin >> R_Type;
		R_Type = toupper(R_Type);
	}
		Road_Type = R_Type;

}


void Road::setSpeed_Limit(int S_Limit)
	{Speed_Limit = S_Limit;}

//-----------------------------------getters----------------------------
char Road::getRoad_Type()
{
	return Road_Type;
}
int Road::getSpeed_Limit()
{
	return Speed_Limit;
}
float Road::getCountA()
{
	return CountA;
}
float Road::getCountB()
{
	return CountB;
}
float Road::getCountC()
{
	return CountC;
}
//-------------------------------Radar & Allow functions---------------------
bool Road::Radar(int car_speed, char Road_Type)
{
	if (car_speed > Speed_Limit)
		return true;
	else
		return false;
}

void Road::Allow(string Car_Type)
{
	if (Car_Type == "Private" || Car_Type == "Motorcycle")
	{
		cout << "This "<< Car_Type <<" vehicle is allowed on Road A" << endl;
		CountA++;
	}
	if (Car_Type == "Private" || Car_Type == "Motorcycle"|| Car_Type == "Bus" || Car_Type == "Truck")
	{
		cout << "This " << Car_Type << " vehicle is allowed on Road B" << endl;
		CountB++;
		
	}
	if (Car_Type == "Truck")
	{
		cout << "This "<<Car_Type <<" vehicle is allowed on Road C" << endl;
		CountC++;
	}

}

