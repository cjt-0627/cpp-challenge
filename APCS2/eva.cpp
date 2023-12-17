#include<iostream>
using namespace std;
int main()
{
    int n;
    int ar[4];
    cin>>n;
    while(n)
    {
        for(int i=0;i<4;i++)
            cin>>ar[i];
        if(ar[1]-ar[0]==ar[2]-ar[1] && ar[2]-ar[1]==ar[3]-ar[2])
        {
            for(int i=0;i<4;i++)
                cout<<ar[i]<<" ";
            cout<<ar[3]+ar[1]-ar[0]<<endl;
        }
        else if(ar[1]/ar[0]==ar[2]/ar[1] && ar[2]/ar[1]==ar[3]/ar[2])
        {
            for(int i=0;i<4;i++)
                cout<<ar[i]<<" ";
            cout<<ar[3]*(ar[1]/ar[0])<<endl;
        }
        n--;
    }
    return 0;
}