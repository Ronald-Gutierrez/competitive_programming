#include <bits/stdc++.h>
#include <vector>
#define rep(i,n) for(int i=0, len=n; i<len; i++)
#define all(x) x.begin(),x.end()
#define gcd(a,b) (__gcd(a,b))
#define lcm(a,b) ((a/__gcd(a,b))*b)
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = 3.14156519;
const int mod = 1e9+7;
const int maxn = 1e7;


void solve()
{
    int n=3;
    vector <int> arr;
    for(int i=1; i<=n; i++)
    {
        arr.push_back(i);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int a=3;
    int count=0;
    int tmp= arr[a];
    cout<<tmp<<endl;
    for(int i=tmp; i>1; i--)
    {
        if(tmp == arr[n]) break;
        else count++;
    }

    arr.erase(find(arr.begin(),arr.end(),a));
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    arr.push_back(a);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<count<<endl;


    
}
int main() 
{
    solve();
	return 0;
}