#include <iostream>
using namespace std;

int main() {
    int correct = 3, guess;

    cout << "Guess number (1-5): ";
    cin >> guess;

    if(guess == correct) cout << "Win!";
    else cout << "Lose!";
}
