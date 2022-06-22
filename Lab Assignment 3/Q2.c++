#include<iostream>
using namespace std;
class data
{
    int phy,math,chem;
    float average;
    public:
        void setdata()
        {
            cout<<"Enter the Physics Marks:"<<endl;
            cin>>phy;
            cout<<"Enter the Maths Marks:"<<endl;
            cin>>math;
            cout<<"Enter the Chemistry Marks:"<<endl;
            cin>>chem;
        }
        void show()
        {
            // average=(float)((phy+math+chem)/3);
            cout<<"Average marks:"<<average<<endl;
        }
        friend data average(data);
};
data average(data a)
{
    a.average=((float)(a.phy+a.math+a.chem)/(float)3);    
    return a;
}
int main()
{
    data d1;
    d1.setdata();
    d1=average(d1);
    d1.show();
    data d2[5];
    for (int i = 0; i < 5; i++)
    {
        d2[i].setdata();
        d2[i]=average(d2[i]);
        d2[i].show();
    }
    return 0;
}