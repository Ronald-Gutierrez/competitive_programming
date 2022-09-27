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
    string palabra;
    string letras[6] = {"BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};
    while(cin>>palabra)
    {
        int tmp=0;
        for(int i=0; i<palabra.size(); i++)
        {
            for(int j=0; j<6; j++)
            {
                if(letras[j].find(palabra[i]) != string::npos)
                {
                    if(tmp != j+1){
                        cout<<j+1;
                        tmp= j+1;
                        break;
                    }
                    else break;
                }
                if (j==5) tmp=0;
            }
        }
        cout<<endl;
    }
}
int main() {

    solve();
	return 0;
}