#include <iostream>
using namespace std;

int calculateCycLen(int value) {
	int counter = 1;
	while (value != 1) {
		if (value % 2 == 0) {
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
		cycleLength = calculateCycLen(x);
		if (cycleLength > maxCycleLength) {
			maxCycleLength = cycleLength;
		}	
	}
	
	cout <<i <<" " <<j <<" " <<maxCycleLength; //TODO: put in varible

	return 0;
}