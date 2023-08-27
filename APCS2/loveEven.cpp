#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<(b-a)/2+1-(((a%2)+(b%2))/2);
    return 0;
}