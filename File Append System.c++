#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);
    string text;

    cin.ignore();
    getline(cin, text);

    file << text << endl;
}
