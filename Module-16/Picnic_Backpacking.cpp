#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >>n>>m;
        vector<long long int>T(n),J(m);
        for (auto &x:T) 
        {
            cin >>x;
        }
        for (auto &x:J) 
        {
            cin >>x;
        }
        long long int S;
        cin >>S;
        sort(T.begin(), T.end());
        sort(J.begin(), J.end());
        long long int res =0;
        int i =0,j =m-1;

        while (i <n && j >=0) 
        {
            long long int sum = T[i]+J[j];
            if (sum == S) 
            {
                long long int cntT =1,cntJ =1;
                while (i+1<n && T[i]==T[i+1]) 
                {
                    i++;
                    cntT++;
                }
                while (j-1 >= 0 && J[j] == J[j-1]) 
                {
                    j--;
                    cntJ++;
                }
                res += cntT*cntJ;
                i++;
                j--;
            } 
            else if (sum < S) 
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
        cout <<res<< endl;
    }

    return 0;
}
