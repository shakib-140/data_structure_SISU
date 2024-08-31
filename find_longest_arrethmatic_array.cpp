#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=2;
    int ans=2;
    int pd=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        if(pd==arr[i]-arr[i-1])
        {
            count++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            count=2;
        }
       ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}
