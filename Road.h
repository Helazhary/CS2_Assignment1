#pragma once
#include<iostream>
#include <string>
using namespace std;

class Road
{
private:
	//-----------------------------------class variables----------------------------
	char Road_Type;
	int Speed_Limit;
	int CountA = 0;
	int CountB = 0;
	int CountC = 0;

public:
	//-----------------------------------constructors----------------------------

	Road();
	Road(char Road_Type, int Speed_Limit);
	

	//-----------------------------------setters----------------------------
	void setRoad_Type(char R_Type);

	void setSpeed_Limit(int S_Limit);

	//-----------------------------------getters----------------------------
	char getRoad_Type();

	int getSpeed_Limit();
	
	float getCountA();
	float getCountB();
	float getCountC();


	//-------------------------------other functions---------------------
	bool Radar(int car_speed, char Road_Type);
	void Allow(string Car_Type);

};

