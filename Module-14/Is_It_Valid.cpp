#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T; 
    while(T--)
    {
        string S;
        cin >> S; 
        stack<char>A; 

        for(int i=0; i<S.size(); i++)
        {
            char c = S[i];
            if(!A.empty() && ((c =='0' && A.top() =='1')||(c == '1' && A.top()=='0')))
            {
                A.pop(); 
            }
            else
            {
                A.push(c); 
            }
        }

        if(A.empty())
        {
            cout <<"YES"<<endl; 
        }
        else
        {
           cout <<"NO"<<endl;   
        }
    }

    return 0;
}
