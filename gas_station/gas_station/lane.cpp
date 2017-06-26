#include "lane.h"

Lane::Lane(string n,string a, string b) {
	init();
	hasGas[0] = a;
	hasGas[1] = b;
	name = n;
}


Car* Lane::addGas() {
	if (head != NULL) {
		Car* car = this->pop();
		cout << "车辆" << car->number << "已加完油进入出口" << endl;
		return car;
	}
	else {
		cout << "该车道没有等待加油的车辆" << endl;
	}
}

void Lane::displayInfo()
{
	cout << name<<"车道现有" << length << "辆车" << endl;
	auto* ptr = head;
	int n = 0;
	while (ptr != NULL) {
	n++;
	cout << "第" << n << "辆车" << endl << "编号：" << ptr->data.number << "    " << "汽油型号：" << ptr->data.gas_type << "    " << "汽油量：" << ptr->data.gas_capacity << endl;
	ptr = ptr->next;
	}
}