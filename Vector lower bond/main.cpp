#include <iostream>
#include <vector>


/*
Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15

 */

using namespace std;

int main() {
    vector<int>v;
    int N,Q,Y,a;
    cin>> N;
    for (int i=0;i<N;i++){
        cin >>a;
        v.push_back(a);
    }
    cin>> Q;
    for (int j=0;j<Q;j++)
    {
        cin >> Y;
         vector<int>::iterator low = lower_bound(v.begin(), v.end(), Y);
       if (v[low - v.begin()] == Y)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
    }

    return 0;
}

