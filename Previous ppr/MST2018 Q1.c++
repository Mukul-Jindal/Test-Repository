#include<iostream>
#include<string.h>
using namespace std;
int Fair_cal(int);
class Travel
{
    char* source;
    char* destination;
    int distance;
    int fair;
    public:
        void getData(char*,char*,int);
        void showData();
        friend int Fair_cal(int);
};
void Travel::getData(char* a,char* b,int dis)
{
    int length;
    length=strlen(a);
    source=new char[length+1];
    strcpy(source,a);
    length=strlen(b);
    destination=new char[length+1];
    strcpy(destination,b);
    distance=dis;
    fair= Fair_cal(dis);
}
int Fair_cal(int d)
{
    int fair=0;
    if (d <= 5)
    {
        fair=fair+d*3;
    }
    else if((d>5)&&(d<=10))
    {
        fair=fair+2*d;
    }
    else
    {
        fair=fair+d;
    }
    return fair;
}
void Travel::showData()
{
    cout<<"Source:"<<source<<endl;
    cout<<"Destination:"<<destination<<endl;
    cout<<"Distance:"<<distance<<endl;
    cout<<"Fair:"<<fair<<endl;
}
int main()
{
    Travel t1;
    t1.getData("Shimla","Mohali",150);
    t1.showData();
    return 0;
}