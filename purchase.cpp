#include <iostream>
using namespace std;
int main()
{
    int n;
    int d;
    int max = -1, min = 200;
    int num = 0; // 購買數量
    int money = 0,average=0;
    int price[101][3];
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> price[i][j];
    for (int i = 0; i < n; i++)
    {
        max = -1;
        min = 200;
        for (int j = 0; j < 3; j++)
        {
            price[i][j] >= max ? max = price[i][j] : 1;
            price[i][j] <= min ? min = price[i][j] : 1;
            average = (price[i][0] + price[i][1] + price[i][2]) / 3;

        }
            if ((max - min )>= d)
            {
                num++;
                money = money + average;
            }
    }
    cout << num << " " << money;
    return 0;
}