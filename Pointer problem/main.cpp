#include <iostream>

using namespace std;

int main()
{


    // The pointer is a variable which stores the address in the memory where a variable is located.





    int x=5;

    int *p;             // pointer declare  ( data_type * variable name )
    p=&x;               // &x mean address of the pointer
    cout << x<<endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p <<endl;  // *p mean pointer value

    return 0;
}

//Note that C++ requires the keyword const for pointers that point to characters within an array.
//This forces the characters to remain intact and prevents the pointer from potentially pointing elsewhere.
