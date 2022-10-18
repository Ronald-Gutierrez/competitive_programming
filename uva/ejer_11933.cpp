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
    int n=1;,even,temp1,c,sum;
    while(cin>>n==1)
    {

        if(n==0)
            break;
        temp1=n;
        c=0;
        even=0;
        sum=0;
        while(temp1!=0)
        {
            if(temp1%2==1)
            {
                even++;
                if(even%2==1)
                {
                    sum+=pow(2,c);
                }
            }
            temp1/=2;
            c++;
        }
        cout<<sum<<" "<<n-sum;
    }
}
int main()
{
    solve();
    return 0;
}

