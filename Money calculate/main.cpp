#include <iostream>

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int amount;
    cout<<"Amount of money:";
    cin>> amount;
     int notes[6] = { 500,100,50, 10, 5, 1 };
    int noteCounter[6] = { 0 };


    for (int i = 0; i < 6; i++) {
        if (amount >= notes[i]) {
            noteCounter[i] = amount / notes[i];
            amount = amount - noteCounter[i] * notes[i];
            cout << noteCounter[i] << " note(s) of " <<  notes[i] << endl;
        }
        else
            cout <<noteCounter[i] << " note(s) of  " << notes[i] << endl;
    }

    return 0;
}
