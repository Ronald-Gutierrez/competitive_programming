#include <bits/stdc++.h>
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
    int n, val;
    while(cin>>n)
    {
        vector<int> v;
        rep(i,n)
        {
            cin>>val;
            v.push_back(val);
        }
        bool jolly = true;
        int tmp[n]={0};
        for(int i=0; i<n-1; i++)
        {
            int dif = abs(v[i]-v[i+1]);
            if(dif > n-1 || dif == 0 || tmp[dif] == 1)
            {
                jolly = false;
                break;
            }
            tmp[dif]=1;

        }
        if(jolly) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
}
int main() {

    solve();
	return 0;
}