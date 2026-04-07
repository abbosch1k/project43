#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "1-Hi 2-Bye 0-Exit: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Hello\n"; break;
            case 2: cout << "Goodbye\n"; break;
        }
    } while(choice != 0);
}
