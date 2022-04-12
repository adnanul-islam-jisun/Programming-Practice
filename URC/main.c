#include<stdio.h>
#include <math.h>


int main()
{


    int a,b,add,sub,mul ;
    double div;

    printf(" 9 8 7  \n 6 5 4 \n 3 2 1 \n");

    scanf("%d",&a);

    scanf("%d",&b);
fflush(stdout);
fflush(stdin);

    char c;
    printf (" +   - \n *   / \n \n \n");
    printf ( "Input Operator: ");
    scanf("%c", &c);






    if (c=='+'){
        add=a+b;
        printf("Addition is %d",add);
    }
    else if ( c=='-'){
        sub=a-b;
        printf("Substraction  is %d",sub);
    }
    else if ( c=='*'){
        mul=a*b;
        printf("Multiflication is %d",mul);
    }
    else if (c=='/'){
        div=(double)a/b;
        printf("Divition is %lf ",div);
    }
    else
        {printf ("Invalid Input");}








    return 0;

}
