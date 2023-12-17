#include <iostream>

using namespace std;

int main()
{
    int n, y, max = -10000000;
    int a1, b1, c1;
    int a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        y = a1 * (n - i) * (n - i) + b1 * (n - i) + c1 + a2 * i * i + b2 * i+ c2;
        y > max ? max = y : 1;
    }
    cout << max << endl;
    return 0;
}