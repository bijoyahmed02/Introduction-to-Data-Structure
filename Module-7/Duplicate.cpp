#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    sort(A,A+N);
    for(int i=0; i<N-1; i++)
    {
        if(A[i]==A[i+1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}