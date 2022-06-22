#include<iostream>
using namespace std;
class distance
{
private:
    int x,y;
public:
    void set()
    {
        cout<<"Enter the X and Y distance:"<<endl;
        cin>>x>>y;        
    }    
    distance operator+(distance& d)
    {
        distance d3;
        d3.x=x+d.x;
        d3.y=y+d.y;
        return d3;
    }
    void show()
    {
        cout<<"The distance X:"<<x<<endl<<"The distance Y:"<<y<<endl;
    }
};
int main()
{
    distance d1;
    return 0;
}