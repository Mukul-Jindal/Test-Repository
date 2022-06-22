#include <iostream>
#include <new>
using namespace std;
class power
{
    int x;

public:
    power() { x = 0; }
    power(int n) { x = n; }
    int getx() { return x; }
    void setx(int i) { x = i; }
};

int main()
{
    power ofTwo[] = {1, 2, 4, 8, 16};
    power ofThree[5];
    power *p;
    int i;

    cout << "Powers of 2:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ofTwo[i].getx() << " ";
    }
    ofThree[0].setx(1);
    ofThree[1].setx(3);
    ofThree[2].setx(9);
    ofThree[3].setx(27);
    ofThree[4].setx(81);
    cout << endl;

    cout << "Powers of 3:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ofThree[i].getx() << " ";
    }

    cout << "\n\n";

    p = new power[5];
    for (int i = 0; i < 5; i++)
    {
        p[i].setx(ofTwo[i].getx());
    }
    cout << "Powers of 2:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i].getx() << " ";
    }
    // cout<<"\n\n";
    delete[] p;

    return 0;
}