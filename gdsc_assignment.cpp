#include<bits/stdc++.h>
using namespace std;
//PART -2 O(nlogn) - time , O(1) - space
int main()
{
	int n,k=0,val,diff;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
          cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<=n;i++)
	{
		val =a[k];
        if(val!=a[i])
        {
           diff = (i-k);
           cout<<a[k]<<" - "<< diff<<"\n";
           k=i;
        }
	}
	return 0;
}