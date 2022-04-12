#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

int a;
cout << "How many???";
cin >> a;
double d = 3.14159265358979;

    std::cout << std::fixed;
    std::cout << std::setprecision(a);
    std::cout << d;
}
