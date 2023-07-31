#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool c;
    int d = 0;
    cin >> a >> b >> c;
    if ((a && b) == c)
    {
        cout << "AND" << endl;
        d = 1;
    }
    if ((a || b) == c)
    {
        cout << "OR" << endl;
        d = 1;
    }
    if ((a != b) == c)
    {
        cout << "XOR" << endl;
        d = 1;
    }
    if (d == 0)
        cout << "IMPOSSIBLE" << endl;
    return 0;
}