#include <iostream>

#include <algorithm>

bool bs(int a, int b)
{
    return a > b;
}

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int c = 0;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
        if (i != 0)
            if (num[i] == num[i - 1])
            {
                num[i - 1] = -2147483647;
                c++;
            }
    }
    cout << endl;
    sort(num, num + n, bs);

    for (int i = 0; i < n - c; i++)
        cout << num[i] << " ";
    return 0;
}