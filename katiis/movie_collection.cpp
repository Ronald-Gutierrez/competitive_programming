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
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        arr[i]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int r;
    int tmp;
    for(int i=1; i<=n; i++)
    {
        if(r==arr[i])
        {
            tmp = r;
            for(int j=1; j<n; j++)
            {
                arr[j]=arr[j+1];
                tmp = arr[1];

            }
            cout<<tmp<<" ";
        }
    }

    
}
int main() 
{
    solve();
	return 0;
}