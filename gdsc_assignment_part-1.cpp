#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	int a[n],ar[n];
    for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
     if(a[i]%2==0)
     {
      ar[count] = a[i];
      count++;
     }
    }
    for(int i=0;i<n;i++)
    { 
      if(a[i]%2!=0){
      ar[count] = a[i];
      count++;
     }
    }
    for(int i=0;i<n;i++)
    {
          cout<<ar[i]<<"\t";
    }
	return 0;
}