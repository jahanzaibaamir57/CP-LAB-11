#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

int main() {
    string original;
    char charToDelete;
    cout << "Enter a string:";
    getline(cin,original);
    cout << "Enter the charater you want to delete:";
    charToDelete = _getch();

    
    while (true) {
        int pos = original.find(charToDelete);
        if (pos == -1) {
            break;  
        }
        original.erase(pos, 1);
    }

    cout << endl << original << endl;

    return 0;
}
