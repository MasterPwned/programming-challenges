#include <iostream>
using namespace std;

int calculate(value) {
	int counter = 1;
	while (value != 1) {
		if (value % 2 = 0) {
			value /= 2;
			counter += 1;
		} else {
			value = (value * 3) + 1;
			counter += 1;
		}
	}
	return counter;
}

int main() {
	int i, j, cycleLength;
	int maxCycleLength = 0;
	cout <<"Lower and upper bound: ";
	cin >>i >>j;
	
	for (int x = i; x <= j; x++) {
		cycleLength = calculate(x);
		if (cycleLength > maxCycleLength) {
			maxCycleLength = cycleLength;
		}	
	}
	
	cout <<i <<" " <<j <<" " <<; //TODO: put in varible

	return 0;
}