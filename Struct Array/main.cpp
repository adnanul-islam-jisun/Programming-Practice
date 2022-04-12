#include <iostream>

using namespace std;

struct sinthiya{
 string name;
 int age;
 string home;
 float hight;
 int year;
};

int main()
{
    struct sinthiya lf;
    struct sinthiya k[3];
    cout << "Name";
    cin>>lf.name;
    cout<< "Age";
    cin>>lf.age;
    cout<<"Home";
    cin>>lf.home;
    cout<< "Hight";
    cin>>lf.hight;
    cout<< "year";
    for(int i=0;i<=3;i++)
    {
        cin>> k[i].year;
    }
    cout << "Name:"<< lf.name << endl;
    cout<< "Age"<<lf.age<<endl;
    cout << "Home"<<lf.home<<endl;
    cout << "Hight"<< lf.hight<<endl;
    for(int i=0;i<=3;i++)
    {
        cout<<k[i].year<<" ";
    }
    return 0;
}
