#include<iostream>
#include<string>

using namespace std;

int main() {
	string orignal;
	int character=0;
	cout << "Enter your string:";
	getline(cin, orignal);
	int length = orignal.length();
	for (int i = 0; i < length; i++) {
		if (isupper(orignal[i]) || islower(orignal[i])) {
			character++;
		}
	}
	cout << "\nTotal Number of characters in your string are:" << character;

	return 0;
}
