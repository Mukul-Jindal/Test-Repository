#include <iostream>
using namespace std;

class order
{
private:    
    int bug;
    string bug1;
    int col;
    string col1;
    int code;
    int amm = 0;

public:
    static int order_no;
    static int order_num;
    void get_code()
    {
        cout << "Enter the code\n";
        cin >> code;
        order_no++;
    }
    void sel_bug()
    {
        cout << "Select the Burger\n";
        cout << "1) Veg burger\n";
        cout << "2) Veg cheese burger\n";
        cout << "3) Non-Veg burger\n";
        cin >> bug;
        switch (bug)
        {
        case 1:
            amm = amm + 60;
            bug1 = "Veg Burger 60/-";
            break;
        case 2:
            amm = amm + 70;
            bug1 = "Veg cheese Burger 70/-";
            break;
        case 3:
            amm = amm + 80;
            bug1 = "Non-Veg Burger 80/-";
            break;
        default:
            cout << "Wrong Selection\n";
            break;
        }
    }
    void sel_col()
    {
        cout << "Select the Cold-Drink\n";
        cout << "1) Pepsi\n";
        cout << "2) Sprite\n";
        cin >> col;
        switch (col)
        {
        case 1:
            amm = amm + 50;
            col1 = "Pepsi 50/-";
            break;
        case 2:
            amm = amm + 60;
            col1 = "Sprite 60/-";
            break;

        default:
            cout << "Wrong Selection\n";
            break;
        }
    }
    void display_bill()
    {
        cout << "Order ID:-" << order_no << endl;
        cout << "Code:-" << code << endl;
        cout << "Burger:-" << bug1 << endl;
        cout << "Cold Drink:-" << col1 << endl;
        cout << "Total ammount:-" << amm << "/-" << endl;
    }
    order()
    {
        order_num++;
        order_no = order_no + 23;
    }
};
int order::order_num = 0;
int order::order_no = 2365;
int main()
{
    int t = 1;
    while (true)
    {
        cout << "To enter bill press 1, to exit press 0\n";
        cin >> t;
        if (t)
        {
            order o1;
            o1.get_code();
            o1.sel_bug();
            o1.sel_col();
            o1.display_bill();
        }
        else
        {
            order o2;
            cout << "Number of bill received is:-" << o2.order_num - 1;
            break;
        }
    }
    return 0;
}