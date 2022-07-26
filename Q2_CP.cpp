#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX];
    int i,j,n,c=0;
    cout<<"Enter the Size of the Array\n";
    cin>>n;
    cout<<"Enter the elements of an array\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=9;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                c++;
            }
        }
        if(c!=0)
        {
            cout<<i<<"-"<<c;
            cout<<"\n";
        }

    }


    return 0;
}