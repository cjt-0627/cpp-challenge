#include <iostream>
using namespace std;
int ar[21][41];
int main()
{
    int n, m, ans = 0, c;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    do
    {
        c = ans;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (ar[i][j] == -1)
                    continue;
                if (j != m - 1)
                {
                    int x = j + 1;
                    while (ar[i][x] == -1  && x < m- 1)
                    {
                        x++;
                        
                    }
                    if (ar[i][j] == ar[i][x] && ar[i][x] != -1)
                    {
                        ans = ans + ar[i][j];
                        ar[i][j] = ar[i][x] = -1;
                        cout<<ans;
                    }
                }
                if (i != n - 1)
                {
                    int x = i + 1;
                    while (ar[x][j] == -1  &&  x < n- 1)
                    {
                        x++;
                        
                    }
                    if (ar[i][j] == ar[x][j] && ar[x][j] != -1)
                    {
                        ans = ans + ar[i][j];
                        ar[i][j] = ar[x][j] = -1;
                    }
                }
            }
    } while (c != ans);
    cout << ans << endl;
    return 0;
}
