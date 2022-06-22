#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"result of a/x:"<<a/x<<endl;

        }
        else
        {
            throw x;
        }
    }    
    catch (int i)
    {
        cout<<"Exception Caught: x="<<x<<endl;
    }
    cout<<"End.";

    return 0;
}