#include "Car.h"
#include <string>
#include <iostream>
using namespace std;


//-----------------------------------constructor----------------------------
Car::Car(){}
Car::Car(string Car_Brand, int Speed, int Year_Model)
{
	setSpeed(Speed);
	setCar_Brand(Car_Brand);
	setYear_Model(Year_Model);
}

//-----------------------------------setters----------------------------
void Car::setCar_Brand(string C_Brand)
	{Car_Brand = C_Brand;}

void Car::setCar_Type(string C_Type)
{

	while (C_Type != "Bus" && C_Type != "Private" && C_Type != "Motorcycle" && C_Type != "Truck")
	{
		cout << "\nERROR! " << C_Type << " is an invalid car type" << endl;
		cout << "Please enter a valid car type(Bus, Private, Motorcycle, Truck): ";
		cin >> C_Type;
		C_Type[0] = toupper(C_Type[0]);
	}
	Car_Type = C_Type;

}

void Car::setCar_Plate(string C_Plate)
{
	while (C_Plate.length() != 6)
	{
		cout << "\nERROR! " << C_Plate << " is an invalid car plate" << endl;
		cout << "Please enter a valid car plate (Refrence: XYZ567): ";
		cin >> C_Plate;
	}	
	Car_Plate = C_Plate;
}

void Car::setSpeed(int C_Speed)
	{Speed = C_Speed;}

void Car::setYear_Model(int Y_Model)
	{Year_Model = Y_Model;}

//-----------------------------------getters----------------------------
string Car::getCar_Brand() { return Car_Brand; }

string Car::getCar_Type() { return Car_Type; }

string Car::getCar_Plate() { return Car_Plate; }

int Car::getSpeed() { return Speed; }

int Car::getYear_Model() { return Year_Model; }

//----------------------------Vehicle Age Calculator---------------------
int Car::Age(int Y_Model)
{
	Year_Model = 2022 - Y_Model;
	return Year_Model;
}
