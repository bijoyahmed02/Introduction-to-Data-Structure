#include <iostream>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    if (x==0){
        cout <<0;
        return 0;
    }
    long long int course=(500+x-1)/x;
    cout <<course;
    return 0;
}
