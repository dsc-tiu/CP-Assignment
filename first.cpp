#include <iostream>
#include <vector>
using namespace std;

vector<int> makeArray(int n)
{
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        ar.push_back(t);
    }
    cout << endl;

    return ar;
}

void usingTime(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            arr.push_back(arr[i]);
            arr.erase(arr.begin()+i);
        }
    }
    cout << "time : " << endl;
    for(int i:arr)
    {
        cout << i << endl;
    }
}

void usingSpace(vector<int> arr,int n)
{
    vector<int> even,odd;

    for(int i=0;i<n;i++)
    {
        if(arr[i] %2 == 0)
        {
            even.push_back(i);
        }
        else 
        {
            odd.push_back(i);
        }
    }

    cout << "space : " << endl;
    for(int i:even)
    {
        cout << arr[i] << endl;
    }
    for(int i:odd)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    vector<int> arr = makeArray(n);

    //approch using time complexity O(n^2)
    usingTime(arr,n);
    
    // approch using space complexity O(n)
    usingSpace(arr,n);

    return 0;
}