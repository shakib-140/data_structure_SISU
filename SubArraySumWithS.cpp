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
    int s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==s)
            {
                 cout<<i+1<<" "<<j+1;
                 return 0;
            }

        }
        cout<<endl;
    }
    return 0;
}
