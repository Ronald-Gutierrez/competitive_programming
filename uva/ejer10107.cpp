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
    vector <int> array;
    int x, tmp;
    while(cin>>x)
    {
        array.push_back(x);
        sort(array.begin(), array.end());
        int tam = array.size();
        int mid = tam/2;
        if(tam%2 == 0)
            tmp = ( array[mid] + array[mid-1] ) / 2;
        else
            tmp = array[mid];
        cout<<tmp<<endl;

}
}
int main()
{
    solve();
    return 0;
}

