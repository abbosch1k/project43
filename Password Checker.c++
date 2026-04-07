#include <iostream>
using namespace std;

int main() {
    string pass;
    cout << "Enter password: ";
    cin >> pass;

    if(pass.length() >= 8)
        cout << "Strong";
    else
        cout << "Weak";
}
