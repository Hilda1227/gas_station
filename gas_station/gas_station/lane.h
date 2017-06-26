#pragma once
#include<iostream>
#include<string>
#include "queue.h"
#include "car.h"
using namespace std;

class Car;

class Lane : public Queue<Car> {
public:
	Lane(string = "XX",string = "XX",string = "XX");

	Car* addGas();
	string hasGas[2];
	void displayInfo();

	string name;

};


