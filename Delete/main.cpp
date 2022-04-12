#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d)
    {
        if (a>b&&a>c&&a>>d){
            cout<< a;
        }
        else if (b>a&&b>d&&b>c){
            cout<< b;
        }
         else if (c>a&&c>b&&c>d){
            cout<< c;
        }
        else if (d>a&&d>c&&d>b){
            cout<< c;
        }
        return 1 ;
    }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
     max_of_four(a, b, c, d);
    printf("%d", max_of_four );

    return 0;
}
