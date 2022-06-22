#include<iostream>
using namespace std;
class data
{
    int phy,math,chem;
    float average;
    public:
        static int number;
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
        static void incre( int);
        static void showincre( int);
};
int data::number=1;
void data::incre( int number )
{
    number++;
}
void data::incre( int number )
{
    cout<<"Number:"<<number<<endl;
}
int main()
{
    data* d1;
    d1=new data;
    d1->setdata();
    d1->show();
    d1->showincre(d1->number);
    delete d1;
    data* d2;
    d2=new data[5];
    for (int i = 0; i < 5; i++)
    {
        (d2+i)->setdata();
        (d2+i)->show();
        d2->showincre(d1->number);
    }    
    delete[] d2;
    return 0;
}