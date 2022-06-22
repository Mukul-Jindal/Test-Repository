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
            average=((float)(phy+math+chem)/(float)3); ;
            cout<<"Average marks:"<<average<<endl;
        }
};
int main()
{
    data* d1;
    d1=new data;
    d1->setdata();
    d1->show();
    delete d1;
    data* d2;
    d2=new data[5];
    for (int i = 0; i < 5; i++)
    {
        (d2+i)->setdata();
        (d2+i)->show();
    }    
    delete[] d2;
    return 0;
}