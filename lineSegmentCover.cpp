#include <iostream>
using namespace std;
#define Max (int)1e7

short int ar[Max];

int main()
{
    int n;
    
    cin >> n;
    for (int i = 0; i < Max; i++)
        ar[i] = 0;
    for (int i = 0; i <n; i++)
    {
        int l, r;
        cin >> l >> r;
        ar[l]++;
        ar[r]--;
    }
    int c = 0, ans = 0;
    int left = 0;
    for (int i = 0; i < Max; i++)
    {
        c = ar[i] + c; 
        if (c == 0)
        {
            ans = ans + i - left;
            left=i+1;
        }
    }
    cout << ans;
    return 0;
}