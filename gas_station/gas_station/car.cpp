#include "car.h"

Car::Car(string n, string t, string c)
{
	number = n;
	gas_type = t;
	gas_capacity = c;
}

Lane* Car::ChooseLane(Lane* a, int length) {
	int index[4] = { -1,-1,-1,-1 }, count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			if (gas_type == a[i].hasGas[j]) {
				index[count] = i;
				count++;
			}
		}
	}
	Lane* shortest = &a[index[0]];
	
	for (int i = 1; i < count; i++) {
		
		if (!(shortest->length < a[index[i]].length)) {

			shortest = &a[index[i]];

		}
		
	}
	
	cout <<"车辆"<<number<<"选择了"<< shortest->name<<"车道"<<endl;
	return shortest;
	
}