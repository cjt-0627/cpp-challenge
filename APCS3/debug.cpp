#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] >= num[j + 1])
            {
                int b = num[j];
                num[j] = num[j + 1];
                num[j + 1] = b;
            }
        }
    for (int i = 0; i < n; i++)
        cout<<num[i]<<endl;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(num[j]==num[j+1])
            {
                for(int t=j;t<n-2;t++)
                {
                    num[j+1]=num[j+2];
                }
            }
            
            
            
            if (num[j] < num[j + 1])
            {
                int b = num[j];
                num[j] = num[j + 1];
                num[j + 1] = b;
            }
        }


}