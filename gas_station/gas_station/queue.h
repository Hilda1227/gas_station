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
			tail->next = node;       //不是入队的第一个节点  
		}
		else
		{
			head = node;             //如果是入队的第一个节点  
		}
		tail = node;
		length++;
		cout <<car.number<< "入队" << endl;
	}
	T* pop()
	{

		Node<T> *node = head;
		string name=node->data.number;
		head = head->next;
		node->next = NULL;
		if (head == NULL)         //head时要将tail也赋为NULL  
		{
			tail = NULL;
		}
		length--;
		/*cout << name << "出队" << endl;*/

		return &node->data;
	}
	virtual void displayInfo()=0;
	int length;
	Node<T> *head;
	Node<T> *tail;
};
