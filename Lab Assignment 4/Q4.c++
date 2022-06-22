#include<iostream>
using namespace std;
class Data
{
private:
    string name;
    int maths,chem,phys;
public:
    Data()
    {
        maths=0;
        chem=0;
        phys=0;
        name="anonymous";
    }
    void setdata()
    {
        cout<<"Enter the Marks"<<endl;
        cout<<"Maths: ";
        cin>>maths;
        cout<<"Chemistry: ";
        cin>>chem;
        cout<<"Physics: ";
        cin>>phys;
    }
    void showper()
    {
        cout<<"Percentage: "<<(float)((maths+chem+phys)/3);
    }
};

int main()
{
    Data* d1;
    Data d2;
    d1=&d2;
    d1->setdata();
    d1->showper();
    d2.setdata();
    d2.showper();
    return 0;
}