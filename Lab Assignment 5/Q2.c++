#include <iostream>
using namespace std;
class triangle
{
protected:
    int a, b, c;
};
class perimeter : protected triangle
{
public:
    void setdata()
    {
        cout<<"Enter the sides of triangle"<<endl;
        cin>>a>>b>>c;
    }
    void display()
    {
        cout<<"Perimeter is: "<<a+b+c;
    }
};
int main()
{
    perimeter p1;
    p1.setdata();
    p1.display();
    return 0;
}