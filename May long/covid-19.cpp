#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin>>t;
	while(t--)
	{
	    int n,min=1,max=1;
        cin>>n;
	    vector <int> a;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        a.push_back(temp);
	    }
        sort(a.begin(),a.end());
        for(int &x: a)
        {
            auto x1= lower_bound(a.begin(),a.end(),x);
            auto x2= upper_bound(a.begin(),a.end(),x);
            if((x2-x1)<2)
            {
                x++;
            }
            else
            {
                min++;
                max++;
            }
        }
        cout<<max<<"   "<<min<<endl;
	}
	return 0;
}
