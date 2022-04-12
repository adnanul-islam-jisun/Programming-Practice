#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a=2.3,b=5.8,c=1.1,d=3.5;
    double ans;
    ans= (a + b - c) * d - a / (double)d;
    printf("(%f + %f - %f) * %f - %f / %f= %lf",a,b,c,d,a,d,ans);
    return 0;
}
