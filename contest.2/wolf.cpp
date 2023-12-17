#include <iostream>
using namespace std;
int main()
{
    int n, ar[19], a, c = 0, r=0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    while (cin >> a)
    {
        if (a == 0)
            break;
        if (ar[a - 1] == -2)
            r = -3;
        ar[a - 1] = -2;
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == -1)
            c = 1;
    }
    if (r == -3)
        cout << "Wrong";
    else if (c == 1)
        cout << "Werewolves";
    else
        cout << "Townsfolk";
    return 0;
}