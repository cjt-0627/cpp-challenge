#include <iostream>
#include <algorithm>
using namespace std;
struct bs
{
    int bn; // book number
    int an; // array number
};
bool compare(bs a, bs b)
{
    if (a.bn < b.bn)
        return 1;
    else
        return 0;
}

int main()
{
    int m, n, r = 0;
    bs ar[1001];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].bn;
        if (ar[i].bn == 0)
        {
            ar[i].bn=10000;
            ar[i].an = 10000;
        }
        else
        {
            ar[i].an = i + 1;
            r++;
        }
    }
    sort(ar, ar + n, compare);
    for (int i = 0; i < r; i++)
        cout << ar[i].an << " ";
    return 0;
}