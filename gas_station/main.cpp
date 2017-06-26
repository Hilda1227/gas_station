#include<iostream>
#include<string>

#include "lane.h"
using namespace std;

int main() {
	
	Car car1("11a","#88","11c");
	Car car2("22a", "#99", "22c");
	Car car3("33a", "#77", "33c");

	Lane a[4] = { Lane("#88", "#99"),Lane("#77", "#99"),Lane("#88", "#77"),Lane("#88", "#99") };
	
	car1.ChooseLane(a,4);
		
	
}

