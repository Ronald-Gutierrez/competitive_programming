#include <bits/stdc++.h>
#define rep(i,n) for(int i=0, len=n; i<len; ++i)
#define all(x) x.begin(),x.end()
#define gcd(a,b) (__gcd(a,b))
#define lcm(a,b) ((a/__gcd(a,b))*b)
#define endl ("\n")
using namespace std;
using ll = long long;
using ull = unsigned long long;
const double pi = 3.14156519;
const int mod = 1e9+7;
const int maxn = 1e7;
using namespace std;

void solve()
{
   int a,b=1;
   cin>>a;
   
   rep(i,a)
   {

        int n,x;
        cin>>n;
        int maximo=0;
        rep(i,n)
        {
            cin>>x;
            if(x>maximo)  maximo=x;
        }
        cout<<"Case "<<b<<": "<<maximo<<endl;
        b++;
   }
}
int main()
{
    solve();
    return 0;
}