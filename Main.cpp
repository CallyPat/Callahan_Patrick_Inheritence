// Patrick Callahan
// Cis 1202
// 11/29/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//files included
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	
	string x;

	int y,z,c;


	cout << "Vehicle Program:" << endl;

	cout << endl << "Vehicle: " << endl;

	cout << "Enter the manufacturer: ";
	getline(cin, x);


	cout << "Enter the year built: ";
	cin >> y;

	cout << endl;

//vehicle class object
	Vehicle vehical(x, y);

	vehical.displayInfo();

	cout << endl << "Car: " << endl;
	cin.ignore();


	cout << "Enter the manufacturer: ";
	getline(cin, x);


	cout << "Enter the year built: ";
	cin >> y;


	cout << "Enter the number of doors: ";
	cin >> z;

	cout << endl;

// car class object
	Car car(x, y, z);

	car.displayInfo();

	cout << endl << "Truck: " << endl;

	cin.ignore();

	cout << "Enter the manufacturer: ";
	getline(cin, x);

	cout << "Enter the year built: ";
	cin >> y;

	cout << "Enter the towing capacity: ";
	cin >> c;
	cout << endl;

// truck class object
	Truck truck(x, y, c);


	truck.displayInfo();


	system("pause");
	return 0;
}