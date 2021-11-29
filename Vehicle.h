#pragma once
// Patrick Callahan
// Cis 1202
// 11/29/2021

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


class Vehicle
{

string manufacturer;
  
int yearBuilt;
  
public:
  

Vehicle();
  

Vehicle(string x, int y);
  

string getMan();


int getYear();
  

void setMan(string x);
  

void setYear(int y);
  

void displayInfo();
};

#endif