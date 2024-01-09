//Unique even count
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]+=1;
       }
       for(auto it:mp)
       {
           if((it.first)%2==0)
           {
               cnt=cnt+1;
           }
       }
       cout<<cnt;
}