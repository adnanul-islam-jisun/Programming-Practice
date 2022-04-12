#include <iostream>

using namespace std;

int main()
{


    int arr[5]={9,5,2,5,3};

    int a;
        cout << "please input  the number:";
        cin >> a;
        int b;
         for ( int i=0;i<5;i++)
         {
             if(arr[i]==a)
              b=a;
              break;



             }
             if ( a==b )
                cout << "yes";
             else
                cout << "no";








    return 0;
}
