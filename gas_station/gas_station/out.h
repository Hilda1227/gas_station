#pragma once
#include<iostream>
#include<string>
#include "queue.h"
#include "car.h"
using namespace std;

class Out : public Queue<Car> {
public:
	void displayInfo();

};
void Out::displayInfo() {
	cout << "��������" << length << "����" << endl;
	auto* ptr = head;
	int n = 0;
	while (ptr != NULL) {
		n++;
		cout << "��" << n << "����" << endl << "��ţ�" << ptr->data.number << "    " << "�����ͺţ�" << ptr->data.gas_type << "    " << "��������" << ptr->data.gas_capacity << endl;
		ptr = ptr->next;
	}
}
