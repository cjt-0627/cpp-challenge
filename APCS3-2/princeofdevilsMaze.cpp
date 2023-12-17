#include <iostream>
#include<vector>
using namespace std;

struct num
{
    int r;
    int c;
    int s;
    int t;
};

int maze[101][101];

int main()
{
    vector<num> king;
    king.reserve(501);
    int n, m, k;
    int ans;
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> king[i].r >> king[i].c >> king[i].s >> king[i].t;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            maze[i][j] = 0;
    for (int i = 0; i < k; i++)
        maze[king[i].c][king[i].r] = 1;
    while (k != 0)
    {
        for (int i = 0; i < k; i++)
        {
            if(king[i].c>n || king[i].r>m)
                king.erase(king.begin()+i);
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if(maze[king[i].c][king[i].r] == 2)
                {
                    maze[king[i].c][king[i].r]=0;
                }
            }
        for (int i = 0; i < k; i++)
        {
            king[i].c=king[i].c+king[i].s;
            king[i].r=king[i].r+king[i].t;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                
                if(maze[king[i].c][king[i].r]==2)
                {
                    king.erase(king.begin()+i);
                    maze[king[i].c][king[i].r]=0;
                }
                else
                    maze[king[i].c][king[i].r] = 1;

            }

        
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if(maze[i][j]==0)
            ans++;
        }
}