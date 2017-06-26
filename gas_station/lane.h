#pragma once
#include<iostream>
#include<string>
#include "queue.h"
using namespace std;

class Lane : public Queue  {
public:
	Lane(string,string);
	void addGas();
	string hasGas[2];


};
Lane::Lane(string a, string b) {
	Queue();
	hasGas[0] = a;
	hasGas[1] = b;
}

void Lane::addGas() {
	pop();
}


