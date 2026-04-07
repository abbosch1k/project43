#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int dice = rand() % 6 + 1;
    cout << "Dice: " << dice;
}
