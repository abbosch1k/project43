#include <iostream>
using namespace std;

int main() {
    string method, path;

    cout << "Enter request (e.g. GET /home): ";
    cin >> method >> path;

    if(method == "GET") {
        if(path == "/home") cout << "Home Page";
        else if(path == "/about") cout << "About Page";
        else cout << "404 Not Found";
    } else {
        cout << "Only GET supported";
    }
}
