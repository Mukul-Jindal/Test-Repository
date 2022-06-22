#include <iostream>
using namespace std;
class SubMarks;

float calpercent(SubMarks);

class student
{
    char name[20];
    int roll_No;
public:
    void setdata()
    {
        cout << "Enter the name of student:" << endl;
        cin >> name;
        cout << "Enter the Roll No:" << endl;
        cin >> roll_No;
    }   
    friend class SubMarks;
};
class SubMarks
{
    int chem, maths, phy;
public:
    void display(student &a)
    {
        cout << "Name: " << a.name << endl;
        cout << "Roll No.: " << a.roll_No << endl;
    }
    void setdata()
    {
        cout<<"Enter the number of Chemistry:"<<endl;
        cin>>chem;
        cout<<"Enter the number of Maths:"<<endl;
        cin>>maths;
        cout<<"Enter the number of Physics:"<<endl;
        cin>>phy;
    }
    friend float calpercent(SubMarks);
    void displayper(SubMarks &a)
    {
        cout<<"The PCM  percentage is: "<<calpercent(a)<<"%"<<endl;
    }
};

float calpercent(SubMarks a)
{
    float sum=a.chem+a.maths+a.phy;
    return (float)sum/3;
}
int main()
{
    student a;
    SubMarks b;
    a.setdata();
    b.display(a);
    b.setdata();
    b.displayper(b);
    return 0;
}