#pragma once

// Patrick Callahan
// Cis 1202
// 11/29/2021

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"


using namespace std;

class Car : public Vehicle
{
	int numDoors;

public:
	Car();

	Car(string x, int y, int z);

	int getDoors();

	void setDoors(int z);

	void displayInfo();
};

#endif
