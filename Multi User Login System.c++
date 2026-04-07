#include <iostream>
using namespace std;

int main() {
    string users[2] = {"admin","user"};
    string pass[2] = {"1234","0000"};

    string u,p;
    cin >> u >> p;

    for(int i=0;i<2;i++) {
        if(u == users[i] && p == pass[i]) {
            cout << "Welcome";
            return 0;
        }
    }

    cout << "Denied";
}
