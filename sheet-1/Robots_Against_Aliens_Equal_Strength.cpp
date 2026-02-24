#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<long long int>s(r,0);
    vector<bool>zeros(r,false);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            long long int x;
            cin>>x;
            s[i]=s[i]+x;
            if(x==0)
            {
                zeros[i]=true;
            }
        }
    }
    long long int target=-1;
    for(int i=0; i<r; i++)
    {
        if(zeros[i]==false)
        {
            if(target==-1)
            {
                target=s[i];
            }
            else if(s[i]!=target){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}