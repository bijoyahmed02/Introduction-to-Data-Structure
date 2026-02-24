#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>fre(26,0);
    for(char c:s)
    {
        fre[c-'a']++;
    }
    for(char c:s)
    {
        if(fre[c-'a']==1)
        {
            cout<<c;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}