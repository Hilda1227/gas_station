#pragma once
#include<iostream>
#include<string>
#include "car.h"
using namespace std;
class Node {
public:
	Car data;
	Node *next;

};

 class Queue
{
public:
	Queue();
	void push(Car);
	void pop();
	void displayInfo();
	int length;
	Node *head;
	Node *tail;
};

Queue::Queue()
{
	head = NULL;
	tail = NULL;
	length = 0;
}

void Queue::push(Car car) {  //���
	
	Node *node = new Node;
	node->data = car;

	if (tail != NULL)
	{
		tail->next = node;       //������ӵĵ�һ���ڵ�  
	}
	else
	{
		head = node;             //�������ӵĵ�һ���ڵ�  
	}
	tail = node;
	length++;
	cout << car.number<<"��ӳɹ�" << endl;
}

void Queue::pop() {  //����
	Node *node = head->next;
	string name;
	
	delete head;
	head = node;

	if (head == NULL)         //headʱҪ��tailҲ��ΪNULL  
	{
		tail = NULL;
	}	
	length--;
	cout << name << "���ӳɹ�"<<endl;
}

void Queue::displayInfo() {
	cout << "�ó�������" << length << "����" << endl;
	Node * ptr = head;
	int n = 0;
	while (ptr != NULL) {
		n++;
		cout << "��" << n << "����" << endl << "��ţ�" << ptr->data.number << "    " << "�����ͺţ�" << ptr->data.gas_type << "    " << "��������" << ptr->data.gas_capacity << endl;
		ptr = ptr->next;
	}
}

