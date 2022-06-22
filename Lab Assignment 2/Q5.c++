#include <iostream>
using namespace std;
int a = 10, b = 15;
class sum
{
public:
    sum()
    {
        cout << "Class Constructor called" << endl;
        cout << "The sum of A and b is" << ::a + ::b << endl;
    }
    ~sum()
    {
        cout << "Class Destructor Called" << endl;
    }
};
struct diff
{
    diff()
    {
        cout << "Struct Constructor called" << endl;
        cout << "The Difference of A and b is " << ::a - ::b << endl;
    }
    ~diff()
    {
        cout << "Struct Destructor Called" << endl;
    }
};

int main()
{
    sum s;
    diff d;
    return 0;
}