#include <iostream>

using namespace std;

struct cls
{
    int b;
    int g;
};

int main()
{
    int n, m;
    cin >> n >> m;
    cls c[m + n];
    for (int i = 0; i < m + n; i++)
        cin >> c[i].b >> c[i].g;

    for (int j = 0; j < m + n - 1; j++)
        for (int i = 0; i < m + n - 1 - j; i++)
        {
            if (c[i].b - c[i].g >c[i + 1].b - c[i + 1].g)
            {
                int cc = c[i].b;
                c[i].b = c[i + 1].b;
                c[i + 1].b = cc;
                int aa = c[i].g;
                c[i].g = c[i + 1].g;
                c[i + 1].g = aa;
            }
        }


    int ball=0;
    for (int i = 0; i < n; i++)
    {
        ball = c[i].b + ball;
    }

    int gall=0;
    for (int i = n; i < m + n; i++)
    {
        gall = c[i].g + gall;
    }
    cout << gall + ball;
    return 0;
}