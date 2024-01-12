#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(const string& word) {
    return word == string(word.rbegin(), word.rend());
}

void palindromicArray(const string words[], int size, string palindromicWords[], int& palindromicSize) {
    palindromicSize = 0;

    for (int i = 0; i < size; ++i) {
        if (isPalindrome(words[i])) {
            palindromicWords[palindromicSize++] = words[i];
        }
    }
}

int main() {
    int size;
    cout << "Enter the number of words: ";
    cin >> size;

    string* words = new string[size];
    string* palindromicWords = new string[size];

    cout << "Enter the words:" << endl;
    for (int i = 0; i < size; ++i) {
       cin >> words[i];
    }

    int palindromicSize;
    palindromicArray(words, size, palindromicWords, palindromicSize);

    cout << "Palindromic Words:" << endl;
    for (int i = 0; i < palindromicSize; ++i) {
        cout << palindromicWords[i] << " ";
    }
   cout <<endl;

    delete[] words;
    delete[] palindromicWords;

    return 0;
}
