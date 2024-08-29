#include<bits/stdc++.h>
using namespace std;
int choclate_with_wrappers(int wrappers)
{
    int choclate_num=0;
    int choclate_num1=0;
    while(wrappers>=3)
    {
        choclate_num+=wrappers/3;
        choclate_num1+=choclate_num;
        wrappers=wrappers%3;
        wrappers+=choclate_num;
        choclate_num=0;
    }
    return choclate_num1;
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    int result=choclate_with_wrappers(n);
    cout<<n+result<<endl;


    return 0;
}
