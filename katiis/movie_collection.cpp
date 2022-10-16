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
    int cases;
    cin >> cases;
    while(cases--){
        int n;
        vector <int> arr;
        cin>>n;

        for(int i=n; i>0; i--)
        {
            arr.push_back(i);
        }

        for(auto i:arr)
        {
            cout<<i<<" ";
        }
        int c;
        cin>>c;
        int count=0;
        while(c--){
            int a;
            cin>>a;
            int pos=0;
            for(int i=0; i<n; i++){
                if(arr[i]==a){
                    continue;
                }
                pos++;
            }
            int tmp= arr[pos];
            cout<<tmp<<endl;
            
            while(tmp != '\0') count++;
    
            cout<<"numero de pelis " <<count-1<<endl;
            arr.erase(find(arr.begin(),arr.end(),a));
            arr.push_back(a);
            for(auto i:arr)
            {
                cout<<i<<" ";
            }
            count=0;
            cout<<endl;
        }
    }
}
int main() 
{
    solve();
	return 0;
}