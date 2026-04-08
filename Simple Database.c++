#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string name;

    cout << "1-Save 2-Load: ";
    cin >> choice;

    if(choice == 1) {
        ofstream file("users.txt", ios::app);
        cout << "Enter name: ";
        cin >> name;
        file << name << endl;
    } 
    else {
        ifstream file("users.txt");
        while(getline(file, name)) {
            cout << name << endl;
        }
    }
}
