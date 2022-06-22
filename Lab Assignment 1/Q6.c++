#include<iostream>
using namespace std;
class student
{
    char name[30];
    int roll;
    float marks;
    public:
        void setStudentData()
    {   
        cout<<"Enter the Name\n";
        cin>>name;
        cout<<"Enter the roll no\n";
        cin>>roll;
        cout<<"Enter the marks\n";
        cin>>marks;
    }
    void getStudentData()
    {
        cout<<"Name:- "<<name<<"\n";
        cout<<"Roll:- "<<roll<<"\n";
        cout<<"Marks:- "<<marks<<"\n";
    }
};
int main()
{
    int n;
    cout<<"Enter the number of Student\n";
    cin>>n;
    student st[n];
    for (int i = 0; i < n; i++)
    {
        st[i].setStudentData();
    }
    for (int i = 0; i < n; i++)
    {
        st[i].getStudentData();
    }
    return 0;

}