#include <iostream>
using namespace std;
char s[22][22];

int main()
{
    int k, q, r;
    cin >> k >> q >> r;
    cin >> s[0];
    int num[21][21];
    for (int i = 0; i < q; i++)
        for (int j = 0; j < k; j++)
        {
            cin >> num[i][j];
            s[i + 1][num[i][j]-1] = s[i][j];
        }
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= q; j++)
            cout << s[j][i];
        cout<<endl;
    }
    return 0;
}
