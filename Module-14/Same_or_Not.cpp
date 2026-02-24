#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> A;
    queue<int> B;
    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }
    for(int i = 0; i<M; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }

    if(N != M)
    {
        cout <<"NO";
        return 0;
    }
    while(!A.empty())
    {
        if(A.top() != B.front())
        {
            cout <<"NO";
            return 0;
        }
        A.pop();
        B.pop();
    }
    cout <<"YES";

    return 0;
}
