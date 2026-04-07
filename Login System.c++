#include <iostream>
using namespace std;

int main() {
    string user, pass;

    cout << "Login: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if(user == "admin" && pass == "1234")
        cout << "Access granted";
    else
        cout << "Access denied";
}
