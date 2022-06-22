#include<iostream>
using namespace std;
class Try
{
    public:
        Try()
        {
            cout<<"In Constructor"<<endl;
        }
        ~Try()
        {
            cout<<"Destructor executed"<<endl;
        }
        void fun()
        {
            cout<<"In Function"<<endl;
        }
};

int main()
{
    Try* try1=new Try();
    try1->fun();
    Try try2;
    try2.fun();
    delete try1;
    return 0;
}