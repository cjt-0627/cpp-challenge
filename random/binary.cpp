#include<iostream>
using namespace std;
int n,a[1000000],i=0;
int main()
{
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    while(n>=1)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<a[j];
    return 0;
}