#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("enter sec\n");
    scanf("%d",&a);
    b=a/3600;
    c=a%3600;
    d=c/60;
    e=c%60;
    printf("%d hour %d min %d sec",b,d,e);
    return 0;
}
