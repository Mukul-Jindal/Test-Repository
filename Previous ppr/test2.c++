#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    base()
    {
        a=9;
    }
    void display()
    {
        cout<<"The output is"<<a;
    }
};
class derived1:public base
{
    public:
    derived1()
    {
        a=12;
    }
};
int main()
{
    derived1 ob;
    ob.display();
    return 0;
}