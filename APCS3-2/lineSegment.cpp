#include <iostream>
#include <algorithm>

using namespace std;

struct line
{
    int l;
    int r;
};
line ar[100001];
bool cmp(line a, line b)
{
    return a.l < b.l;
}

int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i].l >> ar[i].r;
    sort(ar, ar + n, cmp);
    int left = ar[0].l;
    int right = ar[0].r;
    for (int i = 1; i < n; i++)
    {
        if (ar[i].l <= right)
        {
            if (ar[i].r > right)
            {
                right = ar[i].r;
            }
        }
        else
        {
            ans = ans + right - left;
            left = ar[i].l;
            right = ar[i].r;
        }
    }
    ans = ans + right - left;
    cout << ans;
    return 0;
}
