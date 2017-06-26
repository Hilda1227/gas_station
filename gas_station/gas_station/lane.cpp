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
		cout << "����" << car->number << "�Ѽ����ͽ������" << endl;
		return car;
	}
	else {
		cout << "�ó���û�еȴ����͵ĳ���" << endl;
	}
}

void Lane::displayInfo()
{
	cout << name<<"��������" << length << "����" << endl;
	auto* ptr = head;
	int n = 0;
	while (ptr != NULL) {
	n++;
	cout << "��" << n << "����" << endl << "��ţ�" << ptr->data.number << "    " << "�����ͺţ�" << ptr->data.gas_type << "    " << "��������" << ptr->data.gas_capacity << endl;
	ptr = ptr->next;
	}
}