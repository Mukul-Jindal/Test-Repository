#include<iostream>
#include<fstream>
using namespace std;
void test(int x) throw(char,double)
{
    if (x==0) throw 'x';
    if (x==1) throw x;
    if (x==-1) throw 1.0;    
};
int main()
{
    try
    {
        cout<<"Testing throw restrictions\n";
        cout<<"X=0\n";
        test(0);
        cout<<"X=1\n";
        test(1);
        cout<<"X=-1\n";
        test(-1);
    }
    catch(char c)
    {
        cout<<"Cought a character\n";
    }
    catch(int m)
    {
        cout<<"Cought a Integer\n";
    }
    catch(double d)
    {
        cout<<"Cought a double\n";
    }    
    return 0;
}