#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int place[r][c];
    int counter = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cin >> place[i][j];
            if (place[i][j] == 1)
                counter++;
        }

    int a, b;

    int nu = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (place[i][j] == 5)
            {
                int x, y;
                x = j;
                y = i;
                int f = 0;
                for (b = y - 1; b <= y + 1; b++)
                    for (a = x - 1; a <= x + 1; a++)
                    {
                        if (b >= 0 && b < r && a >= 0 && a < c && (a != x || b != y))
                            if (place[b][a] == 5)
                                f = 1;
                    }
                if (f == 0)
                    for (b = y - 1; b <= y + 1; b++)
                        for (a = x - 1; a <= x + 1; a++)
                        {
                            if (b >= 0 && b < r && a >= 0 && a < c && (a != x || b != y))
                                if (place[b][a] == 1)
                                {
                                    nu++;
                                    place[b][a] = 0;
                                }
                        }
            }
        }
    cout << nu << " " << counter - nu << endl;
}
