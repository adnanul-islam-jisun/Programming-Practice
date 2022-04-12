#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mon,five;
    printf("Amount of money:");
    scanf("%d",&mon);
    five=mon/500;

int    hun=mon%500;
int    H=hun/100;

int    fif=mon%100;
int    F=fif/50;

int    ten=mon%50;
int    T=ten/10;

 int   fy=mon%10;
 int   FY=fy/5;

  int  on=mon%5;
 int   O=on/1;

    printf("%d note(s) of 500\n",five);
     printf("%d note(s) of 100\n",H);
      printf("%d note(s) of 50\n",F);
       printf("%d note(s) of 10\n",T);
        printf("%d note(s) of 5\n",FY);
        printf("%d note(s) of 1\n",O);






    return 0;
}
