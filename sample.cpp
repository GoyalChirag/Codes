#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        int ar[n1],arr[n2];
        for(int i=0;i<n1;i++)
        cin>>ar[i];
        for(int i=0;i<n2;i++)
        cin>>arr[i];
        int k=n2-1;
        while(k>=0)
        {
            int j=0,temp=0;
            while(j<n1)
            {
                if(ar[j]>arr[k])
                {
                    temp=ar[j];
                    ar[j]=arr[k];
                    arr[k]=temp;
                }
                j++;
            }
            k--;
        } 
        for(int i=0;i<n1;i++)
            cout<<ar[i];
        for(int i=0;i<n2;i++)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}