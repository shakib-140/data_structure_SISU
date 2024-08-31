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
    int m=1e6+2;
    int idx[m];
    for(int i=0;i<m;i++)
    {
        idx[i]=-1;
    }
    int min_index=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            min_index=min(min_index,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    if(min_index==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
