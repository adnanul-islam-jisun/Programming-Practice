#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hight,meter,cent;
    printf("Enter Hight in centimeters:");
    scanf("%d",&hight);
    meter=hight/100;
    cent=hight%100;
    printf("%d meter %d centimeter",meter,cent);
    return 0;
}
