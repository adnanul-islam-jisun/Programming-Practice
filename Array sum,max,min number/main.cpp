#include <iostream>
#include <vector>b

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
    /* ****************Sum**************  */
    int s=0;        //s==sum
    for ( int i=0;i<n;i++) {
        s=s+a[i];

    }

    cout << "sum of all Number="<<s << endl;

    /*  *************Sum End ****************/

    int _max=a[0];

    for (int i=1;i<n;++i){
        if(a[i]>_max){
        _max=a[i];
        }

    }
     cout <<"max number is:"<<_max<<endl;


     int min=a[0];

    for (int i=1;i<n;++i){
        if(a[i]<min){
        min=a[i];
        }

    }
     cout <<"min number is:"<<min<< endl;

    /* ********** Revers Array**********  */


    int p=0;
    int e=n-1;

    while(p<e)
    {
        swap(a[p],a[e]);
        p++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i] << " ";
    }
    return 0;
}
