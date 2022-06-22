#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class data
{
public:
    int n[5];
    string name;
    void set()
    {
        cout<<"Enter the numbers:"<<endl;
        for (int i = 1; i < 6; i++)
        {
            cout<<"Number"<<i<<":";
            cin>>n[i-1];
        }        
        cout<<"Enter the name:"<<endl;
        cin>>name;
    }
    void show()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<n[i];
        }
        cout<<endl<<name<<endl;        
    }
    data operator,(data d1)
    {
        data temp1;
        temp1.name=name + d1.name;
        return temp1;
    }
    data *operator-> ()
    {   
        data *temp;     
        for (int i = 0; i < 5; i++)
        {
            temp->n[i]=n[i]+10;
        }
        return temp;
    }
    int operator[] (int i)
    {
        return n[i];
    }
};
int main()
{
    data d1,d2;
    data* d;
    d=&d1;
    d1.set();
    d2.set();
    d1.show();
    d2.show();
    cout<<d1[3];
    cout<<d2[2];
    d1=d1,d2;
    d1.show();
    
    return 0;
}