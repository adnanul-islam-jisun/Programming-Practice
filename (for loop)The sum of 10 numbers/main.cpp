#include <iostream>

using namespace std;

int main()
{
    int a,sum=0,i=1;
    for (i=1;i<=10;i=i+1) {
        cout << "The Number :";
        cin >> a ;
        sum=sum+a;
    }
    cout << "The sum is:"<< sum ;
    return 0;
}
