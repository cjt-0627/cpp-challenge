#include <iostream>

using namespace std;

int main()
{
    int r, c, n;
    cin >> r >> c >> n;
    int seat[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            seat[((n / 2 + n % 2 - 1) + i) % r][((n / 2) + j) % c] = i * c + j + 1;
        }
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
            cout << seat[i][j] << " ";
        cout<<endl;
    }
    return 0;
}