#include <iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
   string  s1(8,'a'); //s=aaaaaaaa
 //s1[5]='b';          //s=aaaaabaa
 string s2(10,'b');
  strcpy(s2,s1);
  cout << "Copy string from s2 to s1="<< s2<< endl;

   cout<< "lenth of string"<<" " << s1.size()<<endl;

   cout << s1[4]<<s1[3]<<s1[8]<< endl;


   string a,b;
   getline(cin,a);    //string input with space
   getline(cin,b);
   cout << "A" << a  <<endl;
   cout<< "B" << b <<endl;




    return 0;
}
