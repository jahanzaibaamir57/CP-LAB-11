#include<iostream>
#include<string>

using namespace std;


string reversestring(string a, int start, int end);

int main() {
	string orignal;
	string reverse;
	cout << "Enter your string:";
	getline(cin, orignal);
	reverse = reversestring(orignal, 0, orignal.length() - 1);
	cout << reverse;
	if (orignal == reverse) {
		cout << "\n\nYour string is palindrome.\n\n";
	}
	else
		cout << "\n\nYour string is not palindrome.\n\n";

	return 0;
}

string reversestring(string a, int start, int end) {
	if (start >= end) {
		return a;
	}

	swap(a[start], a[end]);
	return reversestring(a, start + 1, end - 1);
	 
}
