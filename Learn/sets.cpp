#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> n;
    n.insert(5);
    n.insert(6);
    n.insert(12);
    n.insert(1);
    n.insert(8);
    n.insert(2);
    n.insert(4);
    n.insert(15);
    int p=n.size();
    set <int> :: iterator itr;
    for(itr=n.begin();itr!=n.end();++itr)
    {
        cout<<*itr<<endl;
    }
    p=n.size();
    cout<<endl<<p<<endl<<*n.lower_bound(8)<<endl<<*n.upper_bound(8);
    return 0;
}