#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFS(const vector<vector<int> > &dominos,vector<bool> &visited,vector<int> &arr,int u)
{
    visited[u] = true;
    for (int i = 0; i < dominos[u].size(); ++i)
    {
        int v = dominos[u][i];
        if (! visited[v])
            DFS(dominos, visited, arr, v);
    }
    arr.push_back(u);
}

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int> > dominos(n + 1);
        vector<bool> visited(n + 1, false);
        vector<int> arr;

        for (int i = 0; i < m; ++i)
        {
            int u, v;
            cin >> u >> v;
            dominos[u].push_back(v);
        }
        for (int u = 1; u <= n; ++u)
            if (!visited[u])
                DFS(dominos, visited, arr, u);

        reverse(arr.begin(), arr.end());
        visited.assign(n + 1, false);
        int knock = 0;
        for (int i = 0; i < n; ++i)
        {
            int u = arr[i];
            if (! visited[u])
            {
                DFS(dominos, visited, arr, u);
                ++knock;
            }
        }
        cout << knock << endl;
    }
    return 0;
}