#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start=0;
    int stop=n;
    while(start<=stop)
    {
        int mid=(start+stop)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            stop=mid-1;
        }
        else
        {
            start=mid+1;
        }

    }

    return -1;
}


void shorting_array(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i< n; i++)
    {

        cin>>arr[i];
    }
    int key;
    cin>>key;
    shorting_array(arr,n);
    int result=BinarySearch(arr,n,key);
    cout<<result;
    return 0;
}
