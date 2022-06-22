#include<iostream>
#include<fstream>
using namespace std;
class Distance
{
private:
    int feet,inches;
public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    Distance(int a,int b)
    {
        feet=a;
        inches=b;
    }
    // void set_data(int x, int y)
    // {
    //     feet=x;
    //     inches=y;
    // }    
    void display()
    {
        cout<<"F:"<<feet<<" I:"<<inches<<endl;
    }
    Distance operator- ()
    {
        Distance temp;
        temp.feet=-feet;
        temp.inches=-inches;
        return temp;
    }
};

int main()
{
    Distance d1(5,7),d2;
    d1.display();
    d2=-d1;
    d2.display();
    return 0;
}