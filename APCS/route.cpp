#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int map[n][m];
    int min = 1000000;
    int x, y;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if (map[i][j] < min)
            {
                min = map[i][j];
                y = i;
                x = j;
            }
        }
    int c = map[y][x]; // counter
    map[y][x]=1000000;
    while (1)
    {
        int d = 0;       // diretion
        int s = 1000000; // smallest
        if (x + 1 < m)
        {
            if (map[y][x + 1] < s)
            {
                s = map[y][x + 1];
                d = 1;
            }
        }
        if (x - 1 >= 0)
        {
            if (map[y][x - 1] < s)
            {
                s = map[y][x - 1];
                d = 2;
            }
        }
        if (y - 1 >= 0)
        {
            if (map[y - 1][x] < s)
            {
                s = map[y - 1][x];
                d = 3;
            }
        }
        if (y + 1 < n)
        {
            if (map[y + 1][x] < s)
            {
                s = map[y + 1][x];
                d = 4;
            }
        }
        if (d > 0)
        {
            switch (d)
            {
            case 1:
                x++;
                break;
            case 2:
                x--;
                break;
            case 3:
                y--;
                break;
            case 4:
                y++;
                break;
            }
            c = c + map[y][x];
            map[y][x]=1000000;
        }
        else
        break;
    }
    cout<<c;

}