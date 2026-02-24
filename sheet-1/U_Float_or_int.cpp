#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    int y=(int)x;
    if(y==x)
    {
    cout<<"int "<<x<<endl;
    }
    else{
        cout<<"float "<<y<<" "<<x-y<<endl;
    }
    return 0;
}