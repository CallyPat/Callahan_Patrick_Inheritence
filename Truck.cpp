// Patrick Callahan
// Cis 1202
// 11/29/2021

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle()
{
	cap = 0;
}


Truck::Truck(string x, int y, int z) : Vehicle(x, y)
{
	// Set tow_cap to t
	cap = z;
}

// towing capacity getter
int Truck::getCap()
{
	return cap;
}

//towing capacity setter
void Truck::setCap(int z)
{
	cap = z;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Towing Capacity: " << getCap() << endl;
}



