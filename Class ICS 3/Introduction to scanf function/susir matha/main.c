#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    scanf("%f",&n);

    if(n-(int)n==0){
        printf("0");
    }
    else
        printf("1");
    return 0;
}
