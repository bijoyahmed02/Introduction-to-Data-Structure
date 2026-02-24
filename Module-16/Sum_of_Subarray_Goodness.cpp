#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    map<long long int, int> lastPos;
    long long int sum = 0;
    const long long int mod = 1000000007;
    for(int i = 0; i < n; i++) 
    {
        int preIdx = -1;
        if(lastPos.count(a[i])) 
        {
            preIdx = lastPos[a[i]];
        }
        long long int left = i-preIdx;       
        long long int right = n-i;           
        long long int ctb = ((a[i] % mod)*(left % mod)) % mod;
        ctb = (ctb * (right % mod)) % mod;
        sum = (sum+ctb) % mod;
        lastPos[a[i]] = i;
    }
    cout <<sum<<endl;
    return 0;
}
