#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    // cout<<n;
    int is_armstrong;
    while(n>0)
    {
        int remainder=n%10;
        is_armstrong=is_armstrong+(remainder*remainder*remainder);
        n=n/10;
    }
    cout<<is_armstrong<<endl;
    if(m == is_armstrong)
    {
        cout<<"it is a armstrong number";

    }
    else
    {
        cout<<"it is not srmstrong number";
    }
}
