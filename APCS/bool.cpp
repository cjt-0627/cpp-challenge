#include <iostream>

using namespace std;

int main()
{
    int a, b, ans;
    cin >> a >> b >> ans;
   
    if (ans == 0)
    {
        if (a == 0 && b == 0)
        {
            cout << "AND" << endl;
            cout << "OR" << endl;
            cout << "XOR" << endl;
        }
        else if (a == 0 && b != 0)
            cout << "AND" << endl;
        else if (a != 0 && b == 0)
            cout << "AND" << endl;
        else if (a != 0 && b != 0)
            cout << "XOR" << endl;
        else
            cout << "IMPOSSIPLE" << endl;
    }
    if (ans == 1)
    {
        if (a == 0 && b != 0)
        {
            cout << "OR" << endl;
            cout << "XOR" << endl;
        }
        else if (a != 0 && b == 0)
        {
            cout << "OR" << endl;
            cout << "XOR" << endl;
        }
        else if (a != 0 && b != 0)
        {
            cout << "AND" << endl;
            cout << "OR" << endl;
        }
        else
            cout << "IMPOSSIPLE" << endl;
    }

    return 0;
}