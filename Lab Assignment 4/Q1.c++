#include <iostream>
using namespace std;
class employee
{
    int id;
    string name;
    int salary;

public:
    employee()
    {
        id=0;
        name="NULL";
        salary=0;
        cout<<"Giving data by no argument constructor"<<endl;
    }
    employee(int i,int sal)
    {
        id=i;
        salary=sal;
        name="Employee 1";
    }
    employee(int i)
    {
        id=i;
        salary=0;
        name="Employee 2";
    }

    void display();

    ~employee()
    {
        cout<<"Destructor is initiated\n";
    }
};
void employee::display()
{
    cout<<"ID:-"<<id<<endl;
    cout<<"Name:-"<<name<<endl;
    cout<<"Salary:-"<<salary<<endl;
}
int main()
{
    employee e1,e2(1,100),e3(2),e4(e2);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}