#include <iostream>

using namespace std;

int main()
{






     int n;
     cout<< "Enter box number:";
     cin>> n;



     double a[n];//a==Arry
    for ( int i=0;i<n;i++) {
        cout << "enter number:";
        cin >> a[i];
        }

    for (int i=0;i<n;i++)
    {
       int jm=i;
        for (int j=i+1;j<n;j++)
        {


        if (a[jm]>a[j])
           jm=j;

        }

    swap (a[jm],a[i]);

    }

    for ( int i=0;i<n;i++)
    {
        cout << a[i]<< " ";
    }
    return 0;



}







