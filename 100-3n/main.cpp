#include <iostream>
using namespace std;

int calculateCycLen(int value) {
	int counter = 1;
	while (value != 1) {
		if (value % 2 == 0) {
			value /= 2;
		} else {
			value = (value * 3) + 1;
		}
		counter++;
	}
	return counter;
}

int main() {
	int i, j, i2, j2, cycleLength;
	while (cin >> i) {
		cin >>j;
		int maxCycleLength = 0;
		i2 = i;
		j2 = j;
		if (i > j) {
			i = i^j;
			j = j^i;
			i = i^j;
		}
		
		for (int x = i; x <= j; x++) {
			cycleLength = calculateCycLen(x);
			if (cycleLength > maxCycleLength) {
				maxCycleLength = cycleLength;
			}	
		}
		
		cout <<i2 <<" " <<j2 <<" " <<maxCycleLength <<endl;

	}
	return 0;	
}