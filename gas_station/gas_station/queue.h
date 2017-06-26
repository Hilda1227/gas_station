#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class Node {
public:
	T data;
	Node *next;

};

template<class T>
 class Queue
{
protected:
	void init()
	{
		head = NULL;
		tail = NULL;
		length = 0;
	}

public:
	Queue()
	{
		init();
	}

	void push(T& car)
	{
		Node<T> *node = new Node<T>;
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
		cout <<car.number<< "���" << endl;
	}
	T* pop()
	{

		Node<T> *node = head;
		string name=node->data.number;
		head = head->next;
		node->next = NULL;
		if (head == NULL)         //headʱҪ��tailҲ��ΪNULL  
		{
			tail = NULL;
		}
		length--;
		/*cout << name << "����" << endl;*/

		return &node->data;
	}
	virtual void displayInfo()=0;
	int length;
	Node<T> *head;
	Node<T> *tail;
};
