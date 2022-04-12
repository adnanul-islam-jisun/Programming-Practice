#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);

    printf("%f +  %f=%f \n",a,b,a+b);
    printf("%f -  %f=%f \n",a,b,a-b);
    printf("%f *  %f=%lf\n",a,b,a*b);
    printf("%f /  %f=%lf \n",a,b,a/b);

    return 0;
}
