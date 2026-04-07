#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int user, comp = rand()%3;

    cout << "0-Rock 1-Paper 2-Scissors: ";
    cin >> user;

    if(user == comp) cout << "Draw";
    else if((user==0 && comp==2) || (user==1 && comp==0) || (user==2 && comp==1))
        cout << "Win";
    else
        cout << "Lose";
}
