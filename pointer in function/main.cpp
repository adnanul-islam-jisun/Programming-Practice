#include <iostream>
#include <memory.h>

using namespace std;

void swa(int &p,int &q)
{
    int t=p;
    p=q;
    q=t;
}
int sqr(int &x)
{
    x*=x;
}
int main()
{
    int a=5;
    int b=7;

    swa(a,b);
    cout << a << " " << b <<endl;

    sqr(a);
    cout << a;
    return 0;
}
