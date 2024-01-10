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
    int a;
    cin>>a;
    int sum=0;
    for(int i=0;i<=a;i++)
    {
        sum+=i;
    }
    cout<<sum;
}