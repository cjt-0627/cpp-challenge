#include <iostream>
#include <algorithm>
using namespace std;

struct a
{
    int s;
    int e;
};

bool cmp(a x, a y)
{
    return x.e < y.e;
}
a c[100001]; // campaign
int main()
{
    int k, n;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
        cin >> c[i].s;
    for (int i = 0; i < n; i++)
        cin >> c[i].e;
    sort(c, c + n, cmp);

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        int now = -1;
        for (int j = 0; j < n; j++)
        {
            if (now < c[j].s)
            {
                now = c[j].e;
                ans++;
                c[j].s = -2;
            }
        }
    }
    cout << ans;
    return 0;
}