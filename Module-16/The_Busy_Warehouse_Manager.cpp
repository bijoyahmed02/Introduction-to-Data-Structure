#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;
    vector<pair<long long int,int>>wh;
    while (Q--) 
    {
        int type;
        cin >> type;
        if(type == 1) 
        {
            long long int X;
            cin >> X;
            bool found = false;
            for(auto &p : wh) 
            {
                if(p.first == X) 
                {
                    p.second++;
                    found = true;
                    break;
                }
            }
            if (!found) 
            {
                wh.push_back({X,1});
            }
        } 
        else if(type==2) 
        {
            if(wh.empty()) 
            {
                cout <<"empty"<<endl;   
            } 
            else 
            {
                int maxCnt = -1;
                long long int maxID = -1;
                size_t idx = 0;  
                for(size_t i = 0; i < wh.size(); i++)  
                {
                    if (wh[i].second > maxCnt || (wh[i].second == maxCnt && wh[i].first > maxID)) 
                    {
                        maxCnt = wh[i].second;
                        maxID = wh[i].first;
                        idx = i;
                    }
                }
                cout << maxID << endl; 
                wh.erase(wh.begin() + idx);
            }
        }
    }

    return 0;
}
