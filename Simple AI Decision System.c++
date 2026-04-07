#include <iostream>
using namespace std;

int main() {
    int mood;
    cout << "Mood (1-3): ";
    cin >> mood;

    switch(mood) {
        case 1: cout << "Go outside"; break;
        case 2: cout << "Watch movie"; break;
        case 3: cout << "Sleep"; break;
    }
}
