#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={20,30,40,40,50};
    // l.remove(10);
    // l.sort(greater<int>());
    // l.unique();
    l.reverse();
    for(int val:l)
    {
        cout<<val<<endl;
    }
    return 0;
}