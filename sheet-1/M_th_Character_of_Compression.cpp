#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    int M;
    cin>>S>>M;
    int lenght=0;
    char letter=0;
    for(int i=0; i<S.size(); i++ )
    {
        if(S[i]>='a'&&S[i]<='z')
        {
            letter=S[i];
            lenght++;
            if(lenght==M)
            {
                cout<<letter;
                return 0;
            }
        }
        else{
            int r=S[i]-'0';
            lenght=lenght+r-1;
            if(lenght>=M)
            {
                cout<<letter;
                return 0;
            }
        }
    }

    return 0;
}