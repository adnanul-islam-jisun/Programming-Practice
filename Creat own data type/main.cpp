#include <iostream>

using namespace std;

struct time{
    int day,hours,minute,second;


   time(int d,int h,int m,int s)

    :day(d),hours(h),minute(m),second(s)
    {}
};



int main()
{
   time t(3,12,59,25);
   std:: cout<< t.day <<" "<< t.hours<<" "<< t.minute<<" " <<t.second;
    return 0;
}
