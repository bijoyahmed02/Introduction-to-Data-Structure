#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int y=n/365;
    int remainder_d=n%365;
    int m=remainder_d/30;
    int d=remainder_d%30;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
    
    return 0;
}