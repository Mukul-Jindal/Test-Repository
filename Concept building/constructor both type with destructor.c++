#include<iostream>
using namespace std;
class employee
{
    int id;
    public:
        employee()
        {
            cout<<"The default constructor is initiated.........\n";
        }
        void set_id(int n)
        {
            id=n;
        }
        void display()
        {
            cout<<id<<endl;
        }
};
class student
{
    int roll_no;
    string name;
    public:
        student(int n, string name1)
        {
            roll_no=n;
            name=name1;
        }
        student()
        {
            roll_no=0;
            name="Mukul";
        }
        ~student()
        {
            cout<<"Destructor Invoked\n";
        }
        void display()
        {
            cout<<roll_no<<endl<<name<<endl;
        }
};
int main()
{
    employee e1;
    student s1(1,"ABC"),s2;
    e1.set_id(3);
    e1.display();
    s1.display();
    s2.display();
    return 0;    
}
