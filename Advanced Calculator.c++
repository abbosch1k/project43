#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double x;

    cout << "1-sqrt 2-square: ";
    cin >> choice >> x;

    if(choice == 1) cout << sqrt(x);
    else cout << x * x;
}
