#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a=21,b=15,c=34,d=6;
    float ans,fans;
    ans= a*b+(a-c)/(float)d+b;
    fans=floor(ans);
    printf(" %d * %d + (%d - %d) / %d + %d=%f",a,b,a,c,d,b,fans);
    return 0;
}
