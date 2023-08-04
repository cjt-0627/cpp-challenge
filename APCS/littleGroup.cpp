#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int bf[n];
    for (int i = 0; i < n; i++)
        cin >> bf[i];
    int s;     // start
    int e;     // end
    int c = n; // counter
    int ans = 0;

    while (c != 0)
    {
        for (int i = 0; i < n; i++)
            if (bf[i] != -1)
            {
                s = i;
                e = s;
                break;
            }

        do
        {
            int old = e;
            e = bf[e];
            bf[old] = -1;
            c--;
        } while (s != e);

        ans++;
    }
    cout << ans << endl;
    return 0;
}