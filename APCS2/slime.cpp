#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int times = 0;
    int c = (n + t)/n;
    while (c != 1)
    {
        c = c / 2;
        times++;
    }
    cout<<times;
    return 0;
}