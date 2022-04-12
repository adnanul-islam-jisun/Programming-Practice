#include <iostream>
#include<vector>

using namespace std;
template <typename T>
void write_vector(const vector<T>&V)

{
   cout << "The numbers in the vector are: " ;
  for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}

int main()
{
  int input;
  vector<int> V;
  cout << "Enter your numbers to be evaluated: ";
  for(int j=0; j < 1; j++)
    {
        cin>> input;
        V.push_back(input);
    }
  write_vector(V);
  return 0;
}

 /*
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
vector<int> v;
stringstream ss(str);
int i;
char c;
while (ss>>i) {          //  <<  Add a string to the stringstream object
  v.push_back(i);          //Read something from the stringstream object
  ss>>c;

}
return v;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
*/
