#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long int>even,odd;
    for(int i = 0; i < N; i++) {
        long long int x;
        cin >> x;
        if(x % 2 == 0)
        {
           even.push_back(x); 
        }
        else
        {
           odd.push_back(x); 
        }
    }
    long long int res = -1;
    sort(even.begin(), even.end(), greater<long long int>());
    sort(odd.begin(), odd.end(), greater<long long int>());
    if(!even.empty())
    {
        res = max(res, even[0]);

    }
    if(even.size() >= 2)
    {
        res = max(res, even[0] + even[1]);
    }
    if(odd.size() >= 2)
    {
        res = max(res, odd[0] + odd[1]);

    }
    cout <<res<< endl;
    return 0;
}
