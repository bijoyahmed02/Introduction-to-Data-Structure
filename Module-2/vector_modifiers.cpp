#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,2};
    vector<int>v3={10,20,30,40,50};
    //v.insert(v.begin()+3,v3.begin(),v3.end());
    //v.pop_back();
    vector<int>v2;
    //v.erase(v.begin()+2);
    //v.erase(v.begin()+2,v.begin()+4);

    //replace(v.begin(),v.end(),2,100);
    //v2=v;
    // for(int i=0; i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    // 
    auto it=find(v.begin(),v.end(),100);
    if(it==v.end())
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}