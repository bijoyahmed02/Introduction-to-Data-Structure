#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    long long int C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    if(S=='+')
    {
        if((long long int)A+B==C)
        {
            cout<<"Yes";
        }
        else{
            cout<<(long long int)A+B;
        }
    }
    else if(S=='-')
    {
        if(A-B==C)
        {
            cout<<"Yes";
        }
        else{
            cout<<A-B;
        }
    }
    else if(S=='*')
    {
        if((long long int)A*B==C)
        {
            cout<<"Yes";
        }
        else{
            cout<<(long long int)A*B;
        }
    }
    return 0;
}