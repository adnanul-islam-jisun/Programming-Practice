#include <iostream>
#include <math.h>


using namespace std;

int main()
{

double pi = 0;
int a;
cout << "How many???";
cin >> a;

for (int n = 0; n <=15; n++)
{
pi=pi+(pow(-1,a)/(2*a+1));
pi=pi*4;

    }

    cout << "Estimated PI value:" << pi;




 system("pause");
 return 0;
}
