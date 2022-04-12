#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,pi=3.14159;
    double area;
    printf("Enter the Radius:");
    scanf("%f",&radius);

    area=pi*radius*radius;

    printf("Area is:%lf",area);

    return 0;
}
