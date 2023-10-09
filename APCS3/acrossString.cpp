#include <iostream>

using namespace std;

int main()
{
    int k;
    int c;            // capital
    int b = 0, s = 0; // big small
    string str;
    int len;
    int ans = 0;
    cin >> k;
    cin >> str;
    if (islower(str[0]))
    {
        c = 0;
        s++;
        len = 1;
    }
    else if (isupper(str[0]))
    {
        c = 1;
        b++;
        len = 1;
    }
    for (int i = 1; i < str.length(); i++)
    {
        if (c == 0 && isupper(str[i]))
        {
            b = 1;
            if (s < k)
                s = 0;
            if (s == k)
                len = len + s;
            c = 1;
        }
        if (c == 0 && islower(str[i]))
        {
            s++;
            if (s > k)
            {
                len > ans ? (ans = len) : (len = k);
                len = k;
            }
            c = 0;
        }
        if (c == 1 && islower(str[i]))
        {
            s = 1;
            if (b < k)
                b = 0;
            if (b == k)
                len = len + b;
            c = 0;
        }
        if (c == 1 && isupper(str[i]))
        {
            b++;
            if (b > k)
            {
                len > ans ? ans = len : len=k;
                len = k;
            }
            c = 1;
        }
    }
    if (len >= k && len >= ans)
        ans = len;
    cout << ans;
    return 0;
}