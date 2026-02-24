#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string text="",redo = "";              
    for (int i = 0; i < n; i++) 
    {
        string opr;
        cin >> opr;
        if (opr=="TYPE") 
        {
            char x;
            cin >>x;
            text.push_back(x);
            redo="";  
        } 
        else if (opr=="UNDO") 
        {
            if (!text.empty()) 
            {
                redo.push_back(text.back());
                text.pop_back();
            }
        } 
        else if (opr=="REDO") 
        {
            if (!redo.empty()) 
            {
                text.push_back(redo.back());
                redo.pop_back();
            }
        }
    }
    cout <<text<<endl;;
    return 0;
}
