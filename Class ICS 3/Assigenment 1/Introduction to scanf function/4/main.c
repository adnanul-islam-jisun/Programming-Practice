#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,fans;
    double ans;
    printf("Enter the value of a b c d :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    ans= a*b+(a-c)/(double)d+b;
    fans=floor(ans);
    printf(" %d * %d + (%d - %d) / %d + %d=%d",a,b,a,c,d,b,fans);
    return 0;
}
