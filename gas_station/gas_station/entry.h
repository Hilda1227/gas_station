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
	cout<<"��ţ�"<<x.number<<"    "<< "�����ͺţ�" << x.gas_type<<"    "<< "��������" << x.gas_capacity << endl;

}

void Entry::displayInfo()
{
	cout << "�������" << length << "����" << endl;
	auto* ptr = head;
	int n = 0;
	while (ptr != NULL) {
		n++;
		cout << "��" << n << "����" << endl << "��ţ�" << ptr->data.number << "    " << "�����ͺţ�" << ptr->data.gas_type << "    " << "��������" << ptr->data.gas_capacity << endl;
		ptr = ptr->next;
	}
}

