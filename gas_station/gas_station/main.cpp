#include<iostream>
#include<string>
#include<conio.h>
#include "entry.h"
#include "lane.h"
#include "out.h"
#include "car.h"
using namespace std;

int main() {
	
	
	Car cars[10] = { Car("1","#88","11L"),Car("2", "#99", "22L"),Car("3", "#77", "33L"),//��������
					Car("4","#88","11L"),Car("5", "#99", "22L"),Car("6", "#77", "33L"),
					Car("7","#99","11L"),Car("8", "#99", "22L"),Car("9", "#77", "33L"),
					Car("10","#88","11L")
	};
	
	Entry entry;

	Out out;

	Lane lanes[4] = { Lane("a","#88", "#99"),Lane("b","#77", "#99"),Lane("c","#88", "#77"),Lane("d","#88", "#99") };

	

	for (int i = 0; i < 10; i++) {
		entry.push(cars[i]);
		entry.getInfo(cars[i]);
	}
		
	cout << "���ɰ����а������ж�Ӧ����" << endl;
	cout <<" g:һ����������ͳ���    q:�˳�" << endl;
	cout << "1:a��������    2:b��������    3:c��������    4:d��������"<< endl;
	cout << "�鿴״̬   i:���    a:a����    b:b����    c:c����    d:d����   o:����"<<endl;
	
	int index = 0;
	while (true) {
		fflush(stdin);
		int getch();
		int input = getch();
		if (input == 'i') {
			entry.displayInfo();
		}
		else if (input == 'a') {
			lanes[0].displayInfo();
		}
		else if (input == 'b') {
			lanes[1].displayInfo();
		}
		else if (input == 'c') {
			lanes[2].displayInfo();
		}
		else if (input == 'd') {
			lanes[3].displayInfo();
		}
		else if(input == 'o') {
			out.displayInfo();
		}
		else if (input == '1') {
			Car* car=lanes[0].addGas();
			out.push(*car);
		}
		else if (input == '2') {
			Car* car = lanes[1].addGas();
			out.push(*car);
		}
		else if (input == '3') {
			Car* car = lanes[2].addGas();
			out.push(*car);
		}
		else if (input == '4') {
			Car* car = lanes[3].addGas();
			out.push(*car);
		}
		else if (input == 'g') {
			
			Lane* lane = cars[index].ChooseLane(lanes);
			Car* car = entry.pop();
			lane->push(*car);
			index++;
		}
		else if(input == 'q'){
			cout << "�����˳���ллʹ��" << endl;
			break;
		}
		else {
			cout << "�������벻�Ϸ�" << endl;
		}
	}

	
}

