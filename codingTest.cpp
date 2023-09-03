#include <iostream>

using namespace std;

struct cod
{
    int t;
    int s;
};

cod ar[8];

int main()
{
    int k;
    cin >> k;
    int max = -2;
    int r;

    int c=0; // counter
    for (int i = 0; i < k; i++)
    {
        cin >> ar[i].t >> ar[i].s;
        if (ar[i].s == -1)
            c++;
    }
    for (int i = 0; i < k; i++)
    {
        if (ar[i].s > max)
        {
            max = ar[i].s;
            r = ar[i].t;
        }
    }
    int all = max - k - c * 2;
    if (all < 0)
        all = 0;
    cout << all <<" "<<r;
    return 0;
}