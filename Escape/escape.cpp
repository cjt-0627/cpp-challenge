#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int ar[100][100] = {1};
    string s;
    cin >> s;
    int x = 0, y = 0;

    for (int i = 0; i < s.length(); i++)
    {

        switch (i % 4)
        {
        case 0:
            for (int t = 0; t < (int)s[i] - 48; t++)
            {
                if (x < c - 1)
                {
                    x++;
                    ar[x][y] = 1;
                }
                else 
                break;
            }

            break;
        case 1:
            for (int t = 0; t < (int)s[i] - 48; t++)
            {
                if (y < r - 1)
                {
                    y++;
                    ar[x][y] = 1;
                }
                else 
                break;
            }
            break;
        case 2:
            for (int t = 0; t < (int)s[i] - 48; t++)
            {
                if (x>0)
                {
                    x--;
                    ar[x][y] = 1;
                }
                else 
                break;
            }
            break;
        case 3:
            for (int t = 0; t < (int)s[i] - 48; t++)
            {
                if (y>0)
                {
                    y--;
                    ar[x][y] = 1;
                }
                else 
                break;
            }
            break;
        }
    }
   for(int i=0;i<r;i++)
   {
    for(int t=0;t<c;t++)
    {
        cout<<(ar[t][i]==1?"*":".");

    }
   cout<<endl;
   }
return 0;








}
