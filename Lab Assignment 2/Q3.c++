#include<iostream>
using namespace std;
int abc=99;
class data
{
    int a,b,abc=1;
    public:
    static int time;
        void getNum()
        {
            cin>>a;
            cin>>b;
        }
        int sum(data);
        int sum1(data);
        void show()
        {
            cout<<a<<" "<<b<<" "<<abc<<" "<<endl;
        }
};
int data :: sum(data a)
{
    return a.a+a.b+::abc;// accessed global variable using (::) scope operator
}
int data :: sum1(data a)
{
    return a.a+a.b+abc;// accessed local class variable 
}
int data::time=69;
int main()
{
    data d1;
    d1.getNum();
    int a = d1.sum(d1);
    std::cout<<"With global variable:"<<a<<endl;
    a = d1.sum1(d1);
    std::cout<<"Without gloal variable:"<<a<<endl;
    return 0;
}