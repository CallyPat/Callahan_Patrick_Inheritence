// Patrick Callahan
// Cis 1202
// 11/29/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Vehicle.h"

using namespace std;

// blank constructor
Vehicle::Vehicle()
{
	manufacturer = "";

	yearBuilt = 0;
}


Vehicle::Vehicle(string x, int y)
{
	manufacturer = x;

	yearBuilt = y;
}

// manufacturer getter
string Vehicle::getMan()
{
	return manufacturer;
}

// year built getter
int Vehicle::getYear()
{
	return yearBuilt;
}

// manufacturer setter
void Vehicle::setMan(string x)
{
	manufacturer = x;
}

// year setter
void Vehicle::setYear(int y)
{
	yearBuilt = y;
}


void Vehicle::displayInfo()
{
	cout << "Vehicle Information:" << endl;

	cout << "Manufacturer: " << getMan() << endl;

	cout << "Year Built: " << getYear() << endl;
}