#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    double x=(double)A/B;
    cout<<"floor "<<A<<" / "<<B<<" = "<<(int)floor(x)<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<(int)ceil(x)<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<(int)round(x)<<endl;
    return 0;
}