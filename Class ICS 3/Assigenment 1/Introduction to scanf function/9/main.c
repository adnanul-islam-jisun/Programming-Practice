#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hight,inches,feet;
    printf("Enter Hight in centimeters:");
    scanf("%d",&hight);
    feet=hight/12;
    inches=hight%12;
    printf("%d feet %d inch",feet,inches);
    return 0;
}
