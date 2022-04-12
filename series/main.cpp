#include <iostream>

using namespace std;

int main()
{
    int n,i=1,sum=0;
    cout << "Enter N:";
    cin >> n ;
    do
    {
        sum=sum+i*i;
        i=i+1;
    }while (i<=n);
    cout << "sum of series is :"<< sum ;
    return 0;
}
