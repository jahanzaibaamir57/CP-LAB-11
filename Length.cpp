#include<iostream>
#include<string>
using namespace std;

int main() {
	string orignal;
	cout << "Enter your string:";
	getline(cin, orignal);
	int length = 0;
	while (orignal[length] != '\0') {
		++length;
	}
	cout << "The length of your string is:" << length;

	return 0;
}
