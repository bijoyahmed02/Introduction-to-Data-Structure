#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int l=0, r=n-1;
    int flag=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==val)
        {
            flag=1;
            break;
        }
        else if(arr[mid]>val)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(flag==1)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}