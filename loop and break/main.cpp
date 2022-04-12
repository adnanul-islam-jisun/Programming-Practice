#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "enter a number :";
    cin >> a ;
    while (true) {
        a=a-2;
        cout << a << " ";
        if (a<=0) {
            break;
        }
    }

}
