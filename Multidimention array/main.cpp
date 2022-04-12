#include <iostream>

using namespace std;

int main()
{   int m,n;
        cout<< "Enter Row:";
        cin >> m;
        cout<<"Enter Column:";
        cin >>n;
        cout << endl;

    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "Enter Number:";
            cin>> a[i][j];
        }
        cout << endl;
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< a[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;6

}
