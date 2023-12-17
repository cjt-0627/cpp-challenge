#include <iostream>
#define min(i, j) (i < j ? i : j)
#define max(i, j) (i > j ? i : j)
using namespace std;

struct freetime
{
    int str;
    int end;
};

int main()
{
    int n, m;
    cin >> n >> m;
    freetime ft1[n], ft2[m];
    int sml = 99999;
    int big = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> ft1[i].str >> ft1[i].end;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ft2[i].str >> ft2[i].end;
    }
    int len;
    cin >> len;
    int time = 999999;
    for (int i = 0; i < n; i++)
    {
        for (int t = 0; t < m; t++)
        {
            if (min(ft1[i].end, ft2[t].end) - max(ft1[i].str, ft2[t].str) >= len)
            {
                if (max(ft1[i].str, ft2[t].str) < time)
                    time = max(ft1[i].str, ft2[t].str);
            }
        }
    }
    if (time == 999999)
        cout << "-1" << endl;
    else
        cout << time << " " << time + len << endl;
}