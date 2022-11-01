#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
void solve()
{
    int c;
    cin >> c;

    while(c--) {
        int n, m;
        cin >> n >> m;

        vector<int> dist;
        int val;
        for(int i = 0; i < m; i++){
            cin>>val;
            dist.push_back(val);
        }

        int min = std::min(dist[0], n-dist[0]);
        int max = std::max(dist[0], n-dist[0]);

        for(auto i : dist) {
            min = std::max(min, std::min(i, n-i));
            max = std::max(max, std::max(i, n-i));
        }

        cout << min << " " << max << endl;
    }
}
int main() 
{
    solve();
	return 0;
}