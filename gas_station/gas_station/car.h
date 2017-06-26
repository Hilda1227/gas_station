#pragma once
#include<iostream>
#include<string>
#include "lane.h"
using namespace std;

class Lane;

class Car
{
public:
	Car(string n = "xx", string t = "xx", string c = "xx");
	Lane* ChooseLane(Lane* a, int length = 4);

	string number;
	string gas_type;
	string gas_capacity;
};



