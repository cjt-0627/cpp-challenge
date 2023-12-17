#include <iostream>
using namespace std;
int ar[10][10];
int arr[10][10];
int main()
{
    int r, c;
    cin >> r >> c;
    int s = 0;  // space
    int co = 0; // counter

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> ar[i][j];
            arr[i][j] = ar[i][j];
        }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (ar[i][j] == 0)
            {
                int s = 0;  // space
                int co = 0; // counter
                if (j != c - 1)
                {
                    s = s+ar[i][j + 1];
                    if (ar[i][j + 1] != 0)
                        co++;
                }
                if (j != 0)
                {
                    s = s+ar[i][j - 1];
                    if (ar[i][j - 1] != 0)
                        co++;
                }

                if (i != r - 1)
                {
                    s = s + ar[i + 1][j];
                    if (ar[i + 1][j] != 0)
                        co++;
                }
                if (i  != 0)
                {
                    s = s + ar[i - 1][j];
                    if (ar[i - 1][j] != 0)
                        co++;
                }

                if (co != 0)
                    arr[i][j] = s / co;
            }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}