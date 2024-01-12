#include<iostream>
#include<string>

using namespace std;

int count_evens(int arr[]);

int main() {
	int array[10];
	cout << "Enter 10 integers:";
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	int even = count_evens(array);
	cout << even;
}

int count_evens(int arr[]) {
	int even=0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			even++;
		}
	}
	return even;
}
