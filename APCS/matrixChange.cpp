#include <iostream>

using namespace std;

int main()
{
    int r, c, m;
    cin >> r >> c >> m;
    int a[10][10] = {};
    for (int n = 0; n < r; n++)
    {
        for (int t = 0; t < c; t++)
        {
            cin >> a[n][t];
        }
    }
    for (int t = 0; t < m; t++)
    {
        int k;
        cin >> k;
        if (k == 1)
        {
            for (int i = 0; i < r / 2; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    int blank = a[i][j];
                    a[i][j] = a[r - i - 1][j];
                    a[r - 1 - i][j] = blank;
                }
            }
        }
        else
        {
            int ar[10][10] = {};
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    ar[i][j] = a[i][j];
                }
            }

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    a[j][r - i - 1] = ar[i][j];
                }
            }
            int ch = r;
            r = c;
            c = ch;
        }
    }
    cout << r << " " << c << endl;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}