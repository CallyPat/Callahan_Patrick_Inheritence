#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

// blank constructor
Car::Car() : Vehicle()
{
	numDoors = 0;
}


Car::Car(string x, int y, int z) : Vehicle(x, y)
{
	numDoors = z;
}

//door getter
int Car::getDoors()
{
	return numDoors;
}

//door setter
void Car::setDoors(int z)
{
	numDoors = z;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Doors: " << getDoors() << endl;
}