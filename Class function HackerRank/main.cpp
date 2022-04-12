#include <iostream>
#include <sstream>
using namespace std;
/*
Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10
*/
class Student{
    private:
    int age,standard;
     string first_name,last_name;

    public:

    Student (){};

    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }


    void set_age(int age){
        this->age=age;
    }
    void set_standard(int standard){
        this->standard=standard;
    }
    void set_first_name(string name){
        first_name=name;
    }
     void set_last_name(string name){
        last_name=name;
    }
    string to_string(){
        string data= std::to_string(age)+","+first_name+","+last_name+","           +std::to_string(standard);
        return data;
    }
    ~Student(){};
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age ;
    cin>> first_name;
    cin >> last_name;
    cin >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
