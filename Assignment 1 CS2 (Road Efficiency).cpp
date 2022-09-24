#include <iostream>
#include "Car.h"
#include "Road.h"
#include <queue>
using namespace std;


int main()
{
	//-----------------------------------Initializing Vhicles---------------------------
	Car bmw,jaguar,microbus,ktm,ninja,travelbus,sandtruck;

	bmw.setCar_Brand("BMW");
	bmw.setCar_Plate("HBG746");
	bmw.setCar_Type("Private"); 
	bmw.setSpeed(330);
	bmw.setYear_Model(2019); 

	jaguar.setCar_Brand("jaguar");
	jaguar.setCar_Plate("KFP789");
	jaguar.setCar_Type("Private");
	jaguar.setSpeed(75);
	jaguar.setYear_Model(2007);

	microbus.setCar_Brand("microbus");
	microbus.setCar_Plate("KHJ476");
	microbus.setCar_Type("Bus");
	microbus.setSpeed(40);
	microbus.setYear_Model(1998);

	ktm.setCar_Brand("ktm");
	ktm.setCar_Plate("NBH678");
	ktm.setCar_Type("Motorcycle");
	ktm.setSpeed(240);
	ktm.setYear_Model(2020);

	ninja.setCar_Brand("ninja");
	ninja.setCar_Plate("BHJ947");
	ninja.setCar_Type("Motorcycle");
	ninja.setSpeed(20);
	ninja.setYear_Model(2008);

	travelbus.setCar_Brand("travelbus");
	travelbus.setCar_Plate("SDF478");
	travelbus.setCar_Type("Bus");
	travelbus.setSpeed(80);
	travelbus.setYear_Model(1980);

	sandtruck.setCar_Brand("sandtruck");
	sandtruck.setCar_Plate("SVJ488");
	sandtruck.setCar_Type("Truck");
	sandtruck.setSpeed(80);
	sandtruck.setYear_Model(1900);

	//-----------------------------initializing Roads----------------------------
	Road r1, r2, r3;

	r1.setRoad_Type('A');
	r1.setSpeed_Limit(100);

	r2.setRoad_Type('B');
	r2.setSpeed_Limit(100);

	r3.setRoad_Type('C');
	r3.setSpeed_Limit(60);

	 
	//-------------------------------Queueing Vehicles-----------------------------
	queue <Car> traffic;

	traffic.push(bmw);
	traffic.push(jaguar);
	traffic.push(microbus);
	traffic.push(ktm);
	traffic.push(ninja);
	traffic.push(travelbus);
	traffic.push(sandtruck);

	//-----------------Vehicle Stats (Roads Allowed & Speeding Fines)------------------

	int VehicleNum = 1; //vehicle number counter to organize output and makes it easier to follow
	cout << "~Vehicle Stats(Roads Allowed & Speeding Fines)~" << endl;

	while (traffic.empty() == 0)
	{
		cout << "\n---------------------------------------------------";
		cout << "\n	  Info for Vehicle " << VehicleNum << ": " << traffic.front().getCar_Brand() << endl << endl;
		r1.Allow(traffic.front().getCar_Type());
		
		if (traffic.front().getCar_Type() == "Private")
		{
			if(r1.Radar(traffic.front().getSpeed(), r1.getRoad_Type()))
			{
				cout << "\nThis "<< traffic.front().getCar_Type() <<" vehicle will be fined!" << endl;
				cout << "Vehicle_Brand:    " << traffic.front().getCar_Brand() << endl;
				cout << "Vehicle_Plate:    " << traffic.front().getCar_Plate() << endl;
				cout << "Vehicle_Type:     " << traffic.front().getCar_Type() << endl;
				cout << "Vehicle_Speed:    " << traffic.front().getSpeed() << endl;
				cout << "Year_Model:       " << traffic.front().getYear_Model() << endl;
				cout << "Vehicle Age:      " << traffic.front().Age(traffic.front().getYear_Model()) << endl;
			}
		}


		else if (traffic.front().getCar_Type() == "Motorcycle")
		{
			if (r2.Radar(traffic.front().getSpeed(), r2.getRoad_Type()))
			{
				cout << "\nThis " << traffic.front().getCar_Type() << " vehicle will be fined!" << endl;
				cout << "Vehicle_Brand:    " << traffic.front().getCar_Brand() << endl;
				cout << "Vehicle_Plate:    " << traffic.front().getCar_Plate() << endl;
				cout << "Vehicle_Type:     " << traffic.front().getCar_Type() << endl;
				cout << "Vehicle_Speed:    " << traffic.front().getSpeed() << endl;
				cout << "Year_Model:       " << traffic.front().getYear_Model() << endl;
				cout << "Vehicle Age:      " << traffic.front().Age(traffic.front().getYear_Model()) << endl;
			}
		}


		else if (traffic.front().getCar_Type() == "Bus")
		{
			if (r2.Radar(traffic.front().getSpeed(), r2.getRoad_Type()))
			{
				cout << "\nThis " << traffic.front().getCar_Type() << " vehicle will be fined!" << endl;
				cout << "Vehicle_Brand:    " << traffic.front().getCar_Brand() << endl;
				cout << "Vehicle_Plate:    " << traffic.front().getCar_Plate() << endl;
				cout << "Vehicle_Type:     " << traffic.front().getCar_Type() << endl;
				cout << "Vehicle_Speed:    " << traffic.front().getSpeed() << endl;
				cout << "Year_Model:       " << traffic.front().getYear_Model() << endl;
				cout << "Vehicle Age:      " << traffic.front().Age(traffic.front().getYear_Model()) << endl;
			}
		}

		else
		{
			if (r3.Radar(traffic.front().getSpeed(), r3.getRoad_Type()))
			{
				cout << "\nThis " << traffic.front().getCar_Type() << " vehicle will be fined!" << endl;
				cout << "Vehicle_Brand:    " << traffic.front().getCar_Brand() << endl;
				cout << "Vehicle_Plate:    " << traffic.front().getCar_Plate() << endl;
				cout << "Vehicle_Type:     " << traffic.front().getCar_Type() << endl;
				cout << "Vehicle_Speed:    " << traffic.front().getSpeed() << endl;
				cout << "Year_Model:       " << traffic.front().getYear_Model() << endl;
				cout << "Vehicle Age:      " << traffic.front().Age(traffic.front().getYear_Model()) << endl;
			}
		}

		traffic.pop();
		VehicleNum++;
	}

	//---------------------------Road Stats(Car Count & Efficiency)---------------------
	cout << "---------------------------------------------------"<<endl;
	cout << "\n~Road Stats(Car Count & Efficiency)~" << endl;

	cout << "\nRoad A:" << endl;
	cout << "Car count: "<<r1.getCountA()<<endl;
	cout << "Road Efficiency: " << (r1.getCountA()/ r1.getCountB()) * 100 << "%" << endl;

	cout << "\nRoad B:" << endl;
	cout << "Car count: " << r1.getCountB() << endl;
	cout << "Road Efficiency: " << (r1.getCountB() / r1.getCountB()) * 100 << "%" << endl;

	cout << "\nRoad A:" << endl;
	cout << "Car count: " << r1.getCountC() << endl;
	cout << "Road Efficiency: " << (r1.getCountC() / r1.getCountB()) * 100 << "%" << endl;



}