#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,30,40,50};
    // vector<int> v={2,3,4};
    // list<int>l2;
    // l2.assign(l.begin(),l.end());
    // l2=l;
    // l.push_back(40);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    // cout<<*next(l.begin(),2);
    // l.insert(next(l.begin(),2),v.begin(),v.end());
    // l.erase(next(l.begin(),2),next(l.begin(),5));
    // replace(l.begin(),l.end(),30,100);
    auto it=find(l.begin(),l.end(),200);
    if(it==l.end())
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    for(int val:l)
        {
            cout<<val<<endl;
        }
    return 0;
}