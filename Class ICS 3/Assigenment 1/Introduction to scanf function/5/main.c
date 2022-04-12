#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a,b,c,d;
    double ans;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    ans= (a + b - c) * d - a / (double)d;
    printf("(%f + %f - %f) * %f - %f / %f= %lf",a,b,c,d,a,d,ans);
    return 0;
}
