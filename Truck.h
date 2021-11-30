#pragma once
#pragma once
// Patrick Callahan
// Cis 1202
// 11/29/2021

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
	int cap;

public:
	Truck();

	Truck(string x, int y, int z);

	int getCap();

	void setCap(int z);

	void displayInfo();
};

#endif