#include<iostream>
using namespace std;
class Data
{
private:
    int a,b,c;
    string name;
    static int number;
public:
    Data()
    {
        a=0;
        b=0;
        c=0;
        name="anonymous";
        number++;
    }    
    Data(int x,int y, int z, string nm)
    {
        a=x;
        b=y;
        c=z;
        name=nm;
        number++;        
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Integer average of three number:"<<(a+b+c)/3<<endl;        
    }
    ~Data()
    {
        cout<<"Destructor called"<<number<<endl;
    }
    // ~Data()
    // {
    //     cout<<"Destructor B called"<<number<<endl;
    // }
    // ~Data(int a)
    // {
    //     cout<<"Destructor called"<<number<<endl;
    // }
    // void ~Data()
    // {
    //     cout<<"Destructor called"<<number<<endl;
    // }
};
int Data::number=1;

int main()
{
    Data d1,d2(5,6,7,"Mukul");
    d1.show();
    d2.show();   
    return 0;
}