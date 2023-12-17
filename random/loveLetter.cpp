#include <iostream>
#define cmp(a, b) (b - a + 26) % 26
using namespace std;

int main()
{
    string s;
    int c = 0, ans; // counter
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            s[i] = s[i] - 'A' + 'a';
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        switch (c)
        {
        case 0:
            if (cmp(s[i], s[i + 1]) == 3)
            {
                c++;
            }
            else
            c=0;
            break;
        case 1:
            if (cmp(s[i], s[i + 1]) == 7)
            {
                c++;
            }
            else
            c=0;
            break;
        case 2:
            if (cmp(s[i], s[i + 1]) == 9)
            {
                c=0;
                ans = cmp(s[i], 'v');

            }
            else
            c=0;
            break;

        }
    }
    cout << ans;
}