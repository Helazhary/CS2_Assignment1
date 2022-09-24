#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	//-----------------------------------class variables----------------------------
	string Car_Brand;
	string Car_Type;
	string Car_Plate;
	int Speed;
	int Year_Model;

public:
	//-----------------------------------constructor----------------------------
	
	Car();
	Car(string Car_Brand, int Max_Speed, int Year_Model);
	
	//-----------------------------------setters----------------------------

	void setCar_Brand(string C_Brand);

	void setCar_Type(string C_Type);

	void setCar_Plate(string C_Plate);

	void setSpeed(int C_Speed);

	void setYear_Model(int Y_Model);

	//-----------------------------------getters----------------------------

	string getCar_Brand();

	string getCar_Type();

	string getCar_Plate();

	int getSpeed();

	int getYear_Model();

	//----------------------------Vehicle Age Calculator---------------------
	int Age(int Y_Model);
};

