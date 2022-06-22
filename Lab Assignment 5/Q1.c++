#include <iostream>
// #include <string>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
    void setdata()
    {
        cout << "Enter the Name:" << endl;
        cin>>name;
        cout << "Enter the Roll no." << endl;
        cin >> roll;
        cout << "Enter the Marks Scored" << endl;
        cin >> marks;
    }    
};
class disData : virtual public student
{
public:
    void display()
    {
        cout << "Name: " <<student::name<< endl;
        cout << "Roll No: " <<student::roll<< endl;
        cout << "Marks: " <<student::marks<< endl;
    }
};
int main()
{
    // student s1;
    disData d1;
    d1.setdata();
    // s1.setdata();    
    d1.display();
    return 0;
}