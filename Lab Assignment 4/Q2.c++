#include<iostream>
using namespace std;

class data
{
private:
    int a,b,sum1;
public:
    data(int x=5,int z=6)
    {
        a=x;
        b=z;
        cout<<"A:"<<a<<" B:"<<b<<endl;
    }
    void sum()
    {
        sum1=a+b;
        cout<<"Sum: "<<sum1<<endl;
    }
    ~data()    
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    data d1,d2(8,8);
    d1.sum();
    d2.sum();
    return 0;
}