#include <iostream>

#include <algorithm>

using namespace std;

struct dt
{
    string name;
    int cla;
    int num;
    string intro;
};

bool func(const dt stu1, const dt stu2)
{
    if (stu1.cla == stu2.cla)
        return stu1.num < stu2.num;
    return stu1.cla < stu2.cla;
}

int main()
{
    int n;
    cin >> n;
    dt ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i].name >> ar[i].cla >> ar[i].num >> ar[i].intro;

    sort(ar, ar + n, func);
    for (int i = 0; i < n; i++)
        cout << ar[i].cla << " " << ar[i].num << " " << ar[i].name << endl
             << ar[i].intro << endl;
    return 0;
}