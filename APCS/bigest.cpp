#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n * m];
    for (int i = 0; i < m * n; i++)
        cin >> ar[i];
    int space = 0;
    int abig[n];
    for (int t = 0; t < n; t++)
    {
        int big = 0;

        for (int i = t * m; i < (t + 1) * m; i++)
        {
            ar[i] > big ? big = ar[i] : big = big;
        }
        abig[t] = big;
        space = big + space;
    }
    cout << space << endl;
    int a = 0;
    int b = 1;
    for (int t = 0; t < n; t++)
    {
        if (space % abig[t] == 0)
        {
            if (b == 1)
            {
                cout << abig[t];
                b = 0;
            }
            else
                cout << " " << abig[t];
            a = 1;
        }
    }

    if (a == 0)
        cout << "-1";
    return 0;
}
