#include <iostream>
#include <string>
using namespace std;

int main() {

 string a = "I";
string b = "Love";
string c = "Computer";
string d = "Science";

string* p1 = &c;
string* p2 = &b;
string* p3 = &d;
string* p4 = &a;

cout <<*p4;
cout <<*p2;
cout << *p1;
cout << *p3;

  return 0;

}
