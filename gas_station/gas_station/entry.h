#pragma once
#include<iostream>
#include<string>
#include"queue.h"
#include "car.h"
using namespace std;

class Entry : public Queue <Car> {
public:
	void displayInfo();
	void getInfo(Car);

};
void Entry::getInfo(Car x) {
	cout<<"编号："<<x.number<<"    "<< "汽油型号：" << x.gas_type<<"    "<< "汽油量：" << x.gas_capacity << endl;

}

void Entry::displayInfo()
{
	cout << "入口现有" << length << "辆车" << endl;
	auto* ptr = head;
	int n = 0;
	while (ptr != NULL) {
		n++;
		cout << "第" << n << "辆车" << endl << "编号：" << ptr->data.number << "    " << "汽油型号：" << ptr->data.gas_type << "    " << "汽油量：" << ptr->data.gas_capacity << endl;
		ptr = ptr->next;
	}
}

