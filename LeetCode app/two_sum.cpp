#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli n,sol,j,sum=0;
    cin>>n;
    lli a[n],b[n]={0};
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>sol;
    for(lli i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>sol)
        {
            
        }
    }
    return 0; 
}