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
    int n, m;
    while(cin >> n >> m ) {
        if(n == 0 && m == 0) break;
        vector<int> jack, jill;
        int temp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            jack.push_back(temp);
        }

        for(int i = 0; i < m; i++) {
            cin >> temp;
            jill.push_back(temp);
        }
        if(n > m) {
            sort(all(jack));
            int cont = 0;
            for(int i = 0; i < m; i++) {
                if(binary_search(all(jack), jill[i])) cont++;
            }
            cout << cont << endl;
        } 
        else {
            sort(all(jill));
            int cont = 0;
            for(int i = 0; i < n; i++) {
                if(binary_search(all(jill), jack[i])) cont++;
            }
            cout << cont << endl;
        }
    }
}
int main() 
{
    solve();
	return 0;
}