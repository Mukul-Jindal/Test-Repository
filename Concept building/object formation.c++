#include <iostream>
using namespace std;

class Student
{
    public:
        int id;
        string name; //String can be input like this
};
int main(void)
{
    Student s1;
    cin>>s1.id;
    cin>>s1.name;
    cout<<s1.id<<"\n";
    cout<<s1.name<<"\n";
    return 0;
}
