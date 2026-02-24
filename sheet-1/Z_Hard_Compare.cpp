#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c;
    long long int b,d;
    cin>>a>>b>>c>>d;
    long double e=b*log(a), f=d*log(c);
    if(e>f)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}