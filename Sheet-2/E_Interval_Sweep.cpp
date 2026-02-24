#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cin >>a>>b;
    if(a == 0 && b == 0 || a%2 ==0 || b%2!=0) cout <<"NO"<< endl;
    else cout <<"YES"<< endl;
    

    return 0;
}
