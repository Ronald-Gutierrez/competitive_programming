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
using namespace std;

void solve()
{
	int n, frec, ampli;

	cin>>n;
	rep(i,n) {
		cin>>ampli>>frec;

		for (int i = 0; i < frec; i++) {
			for (int j = 1; j <= ampli; j++) {
				for (int k = 0; k < j; k++) {
					cout<<j;
				}
				cout<<"\n";
			}
			for (int j = ampli - 1; j >= 1; j--) {
				for (int k = 0; k < j; k++) {
					cout<<j;
				}
				cout<<"\n";
			}
			if (i != frec - 1)
				cout<<"\n";
		}
	}

}
int main() {

    solve();
	return 0;
}