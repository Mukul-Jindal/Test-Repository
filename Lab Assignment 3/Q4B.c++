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
    Try* try1=new Try[3];
    try1[0].fun();
    try1[1].fun();
    try1[2].fun();
    delete[] try1;
    return 0;
}