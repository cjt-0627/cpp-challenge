#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int r, c, t;
    int num[11];
    int box[11][11];
    int box2[11][11];
    while (cin >> r >> c >> t)
    {

        for (int i =0; i <r; i++)
            for (int j = 0; j < c; j++)
                cin >> box[i][j];
        for(int i=0;i<t;i++)
             cin >> num[i];
         for (int i = t - 1; i >= 0; i--)
        {
           
            if (num[i] == 0)
            {
                
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                    {
                        box2[c - j - 1][i] = box[i][j];
                    }
                swap(r, c);
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        box[i][j] = box2[i][j];
                
            }
            if (num[i] == 1)
            {
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        box2[r - i - 1][j] = box[i][j];
                for (int i = 0; i < r; i++)
                    for (int j = 0; j < c; j++)
                        box[i][j] = box2[i][j];
            }
        }
        cout << r << " " << c << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << box[i][j];
                if (j != c - 1)
                    cout << " ";
            }

            
                cout << endl;
        }
    }

    return 0;
}