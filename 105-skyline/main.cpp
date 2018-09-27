#include <iostream>
using namespace std;

void getArray(int l, int h, int r, int *height) {
	for (int i = l; i <= r; i++) {
		if (height[i] < h) {
			height[i] = {h};
		}
	}
}

void printArray(int *height) {
	int h2 = -1;
	for (int z = 1; z < 10001; z++) {
		if (height[z] != h2) {
			cout << z <<" " <<height[z] <<" ";
			h2 = height[z];
		}
	}
}

int main() {
	int height[10001] { };
	int left, high, right;
	while (cin >> left) {
		cin >> high >> right;
		getArray(left, high, right, height);
	}
	printArray(height);
	
	return 0;
}