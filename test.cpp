#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = a; i <= b; i = i + c)
        sum = sum + i;
    cout << sum;
    return 0;
}
