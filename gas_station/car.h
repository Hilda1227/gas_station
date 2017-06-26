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
	bool ChooseLane(Lane* a, int length);

	string number;
	string gas_type;
	string gas_capacity;
};

Car::Car(string n, string t, string c)
{
	number = n;
	gas_type = t;
	gas_capacity = c;
}

bool Car::ChooseLane(Lane* a, int length) {
	int index[4] = { -1,-1,-1,-1 }, count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <2; j++) {
			if (gas_type == a[i].hasGas[j]) {
				index[count] = i;
			}
		}
	}
	int i = 0;
	while (index[i] != -1) {
		cout << "车道" << i << "可用";
		i++;
	}
	return true;
}



