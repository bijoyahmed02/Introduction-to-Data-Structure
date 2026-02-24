#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>l(10,5);
    // int a[]={10,20,30};
    vector<int>v={20,30,40};
    list<int> l2(v.begin(),v.end());
    // for(auto it=l.begin(); it!=l.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    // l2.clear();
    l2.resize(5,100);
    for(int val:l2)
    {
        cout<<val<<endl;
    }
    return 0;
}