#include<iostream>
using namespace std;

class Complex
{
    float real,imaginary;
    void setComplex()
    {
        cout<<"Enter the real part\n";
        cin>>real;
        cout<<"Enter the complex part\n";
        cin>>imaginary;
    };
    void displayComplex()
    {
        cout<<real<<"+i"<<imaginary;
    }
};

int main()
{
    
}
