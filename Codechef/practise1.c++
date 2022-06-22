#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a,b,count;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b;
        count=b-a;
        for (int j = a+1; j <= b; j++)
        {
            if (__gcd(a,j)>1)
            {                
                cout<<a<<" "<<b<<endl;
                break;
            }
            else
            {
                count--;
            }            
        }
        if (count==0)
        {
            cout<<"-1"<<endl;
        }        
    }    
    return 0;
}