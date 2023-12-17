#include <iostream>
using namespace std;
struct book
{
    int y; // year
    int m; // month
};

int main()
{
    int n;
    cin >> n;
    string s;
    book bk[100000];
    for (int i = 0; i < n; i++)
        cin >> s >> bk[i].y >> bk[i].m;
    book end[1];
    cin >> end[0].y >> end[0].m;
    int counter = 0;
    for (int i = 0; i < n; i++)

        if (end[0].y > bk[i].y || (end[0].y == bk[i].y && end[0].m >= bk[i].m))
            counter++;

    cout << counter;
    return 0;
}