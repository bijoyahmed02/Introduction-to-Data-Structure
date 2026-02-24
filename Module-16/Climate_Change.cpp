#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long double> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    long double Sum = 0;
    for(long double x : a) 
    {
        Sum = Sum + x;
    }
    long double prefix_Sum = 0;
    int cnt = 0;
    for(int i = 0; i < n-1; i++) 
    {
        prefix_Sum =prefix_Sum + a[i];
        if(2 * prefix_Sum == Sum) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
