#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main()
{
    int a1[MAX];
    int a2[MAX];
    int n;
    cout<<"\n Enter the size of an array:-";
    cin>>n;
    int i;
    cout<<"\n Enter the element of an array:-\n";
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    int ind=0;
    //EVEN NUMBER
    for(i=0;i<n;i++)
    {
        if(a1[i]%2==0)
        {
            a2[ind]=a1[i];
            ind++;
        }

    }
    //ODD NUMBER
    for(i=0;i<n;i++)
    {
        if(a1[i]%2==1)
        {
            a2[ind]=a1[i];
            ind++;
        }

    }
cout<<"\n***************OUTPUT******************\n";
     for(i=0;i<n;i++)
    {
        cout<<a2[i]<<"\t";
    }

return 0;

}
