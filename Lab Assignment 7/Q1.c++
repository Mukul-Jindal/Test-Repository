#include<iostream>
using namespace std;
class data
{
private:
    int num;
public:
    data(int n=0)
    {
        cout<<"Constructor Called:"<<endl;
        num=n;
    }
    void operator+(int n)
    {
        num=num+n;
    }     
    data operator+(data d1)
    {
        data temp;
        temp.num= num + d1.num;
        return temp;
    }
    void show()
    {
        cout<<"Number:"<<num<<endl;
    }
};
int main()
{
    int n;
    data d1(5),d2(6);
    d1.show();
    d1+5;
    d1.show();
    d2=d2+d1;
    d2.show();
    return 0;
}