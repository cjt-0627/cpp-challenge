#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int bun[n];
    int money = 0;
    for (int i = 0; i < n; i++)
        cin >> bun[i];

    for (int i = 0; i < n; i++)
    {
        money = bun[i] * (i + 1) + money;
    }
    cout<<money;
    return 0;
}