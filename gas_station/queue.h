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

void Queue::push(Car car) {  //入队
	
	Node *node = new Node;
	node->data = car;

	if (tail != NULL)
	{
		tail->next = node;       //不是入队的第一个节点  
	}
	else
	{
		head = node;             //如果是入队的第一个节点  
	}
	tail = node;
	length++;
	cout << car.number<<"入队成功" << endl;
}

void Queue::pop() {  //出队
	Node *node = head->next;
	string name;
	
	delete head;
	head = node;

	if (head == NULL)         //head时要将tail也赋为NULL  
	{
		tail = NULL;
	}	
	length--;
	cout << name << "出队成功"<<endl;
}

void Queue::displayInfo() {
	cout << "该车道现有" << length << "辆车" << endl;
	Node * ptr = head;
	int n = 0;
	while (ptr != NULL) {
		n++;
		cout << "第" << n << "辆车" << endl << "编号：" << ptr->data.number << "    " << "汽油型号：" << ptr->data.gas_type << "    " << "汽油量：" << ptr->data.gas_capacity << endl;
		ptr = ptr->next;
	}
}

