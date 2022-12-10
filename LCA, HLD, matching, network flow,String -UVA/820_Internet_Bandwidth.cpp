#include<bits/stdc++.h>
#include<iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <climits>
#include <cmath>

#define MAX 100
using namespace std;

int G[MAX][MAX];
int F[MAX][MAX];
bool visit[MAX];
int n;
int dfs(int s, int t, int flujo) {
    visit[s] = true;

    if (s==t) return flujo;
    
    for(int i=1; i <= n; i++) {

        int capacidad = G[s][i]-F[s][i];

        if (!visit[i] && capacidad > 0) {
            if (int aux = dfs(i, t, min(flujo, capacidad))) {
                F[s][i] += aux;
                F[i][s] -= aux;
                return aux;
            }
            
        }
    }
    return 0;
}

int main() {
    int n_red=0;

    while(cin >> n, n) {
        memset(G, 0, sizeof(G));
        memset(F, 0, sizeof(F));
        memset(visit, 0, sizeof(visit));
        n_red++;
        int s, t, c;
        cin >> s >> t >> c;
        while(c--)
        {
            int i, f, a;
            cin >> i >> f >> a;
            G[i][f] = G[f][i] += a;
        }
        
        int total = 0;
        int aux;
        while(aux = dfs(s, t, INT_MAX)) {
            total += aux;
            memset(visit, 0, sizeof(visit));
        }

        cout << "Network " << n_red << endl;
        cout << "The bandwidth is " << total << "." <<  endl;
        cout << endl;

    }     
}