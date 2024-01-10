#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%a==0) cnt++;
    }
    cout<<cnt<<endl;
}