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
    int sum=0,sum1=0;
    for(int i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(int i=n/2;i<n;i++)
    {
        sum1+=arr[i];
    }
    cout<<sum1-sum;
}