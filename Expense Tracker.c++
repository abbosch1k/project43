#include <iostream>
using namespace std;

int main() {
    double total = 0, x;

    for(int i=0;i<3;i++) {
        cin >> x;
        total += x;
    }

    cout << "Total: " << total;
}
