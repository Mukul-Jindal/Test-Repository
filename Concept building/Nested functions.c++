#include <iostream>
using namespace std;
class data
{
    int a[20];
    int n;
    int largest(void);

public:
    void get_data(void);
    void display(void);
};

void data::get_data(void)
{
    cout<<"Enter the number\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number"<<i+1<<endl;
        cin>>a[i];
    }    
}
int data::largest(void)
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>temp)
        {
            temp=a[i];
        }
        else
        {
            continue;
        }        
    }
    return temp;    
}
void data::display()
{
    cout<<"The larget number is:"<<largest()<<endl;
}
int main()
{
    data d1;
    d1.get_data();
    d1.display();
    return 0;
}