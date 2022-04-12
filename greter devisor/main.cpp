#include <iostream>
#include<cmath>

using namespace std;

/*
int swa(int &a,int &b)
{
    a=b;

    return a;
}
*/


long int MyGCD(long int a, long int b)
{
    long int gcd;

    if(a>=b && a%b == 0)
    {
        return b;
    }
    else if(a<b && b%a == 0)
    {
        return a;
    }

    long int i;
    for(i=1; i<= b/2 && i <= a/2;i++)
    {
        if(a%i== 0 && b%i==0)
        {

            gcd = i;
        }
    }

    return gcd;

}


/*
long int gcd(int y,int x){

     long int  p=pow(5,x)+pow(7,x);
     long int  q=pow(5,y)+pow(7,y);


  while(p!=q){

    if(p==q){
        return p;
        break;
    }

    else if(p>q){

       int r=p-q;
        swa(p,r);
        p=r;
    }
    else{
      int  r=q-p;
        swa(q,r);
    }
   }
  }

*/


int main()
{

/*
    int T;
    cin>>T;
    int *a = new int[T];
    int *b = new int[T];

    int j;
    for(j=0;j<T;j++){
    cin>>a[j]>>b[j];
    }

    for(j=0;j<T;j++){
           gcd(a[j],b[j]);
    }
    */

    int T;
    cin>>T;
    long int *a = new long int[T];
    long int *b = new long int[T];

    int j;
    for(j=0;j<T;j++){
        cin>>a[j]>>b[j];
    }
    long int p,q;
    for(j=0;j<T;j++){
        p=pow(5,a[j])+pow(7,a[j]);
        q=pow(5,b[j])+pow(7,b[j]);
        cout<<MyGCD(p,q)<<endl;
    }


    return 0;
}
