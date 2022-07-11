#include <iostream>
#include <vector>
#include <unordered_map>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int,int> m;
    rep(i,0,n) {int temp; cin >> temp; arr.push_back(temp);}
    rep(i,0,n) m[arr[i]]++;
    unordered_map<int,int> ::iterator it = m.begin();
    while(it!=m.end()){  
        cout << it->first << "-" << it->second << endl;
        it++;
    }
    return 0;
}