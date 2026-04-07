#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string text;

    cout << "1-Write 2-Read: ";
    cin >> choice;

    if(choice == 1) {
        ofstream file("file.txt");
        cout << "Enter text: ";
        cin.ignore();
        getline(cin, text);
        file << text;
    } else {
        ifstream file("file.txt");
        while(getline(file, text))
            cout << text << endl;
    }
}
