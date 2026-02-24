#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        long long int a=1;
        for(int i=1; i<=n; i++)
        {
            a=a*i;
        }
        cout<<a<<endl;
    }
    return 0;
}