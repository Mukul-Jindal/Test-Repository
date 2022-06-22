#include <iostream>
using namespace std;
class num
{
protected:
    int n;

public:
    // num()
    // {
    //     n=1;
    // }
    // num(int a)
    // {
    //     n=a;
    // }
    void set_data(int a)
    {
        n = a;
    }
};
class square : virtual public num
{
protected:
    int k;

public:
    square()
    {
        this->k = n * n;
    }
    // void set_data1()
    // {
    //     this->k = n * n;
    // }
    void show_square();
};
void square::show_square()
{
    cout << "Square of number " << n << " is:" << k << endl;
}
int main()
{
    square s1;
    s1.set_data(6);
    // s1.set_data1();
    s1.show_square();

    return 0;
}