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
	int n;
	cin>>n;
	while(n--){
		int p1, p2;
		cin>>p1>>p2;
		int r1 = p1 + p2;
		int r2 = p1 - p2;
		if (r1 < 0 ||  r2 < 0 || r1%2 == 1 || r2%2 == 1 )
			cout<<"impossible"<<endl;
		else
			cout<<r1/2<<" "<<r2/2<<endl;
	}
}
int main() {
    solve();
	return 0;
}