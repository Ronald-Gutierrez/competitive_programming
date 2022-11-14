#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 500000000
#define maxN 100001
using namespace std;

struct Point {
    int x, y;
};
int n, m;
vector<Point> a, b;

main() {
    while (cin>>n && n) {
        a.resize(n);
        for (int i=0; i<n; i++)
            cin>>a[i].x>>a[i].y;
        cin>>m;
        b.resize(m);
        for (int i=0; i<m; i++)
            cin>>b[i].x>>b[i].y;
            
        int res = INF;
        if (n * m < maxN)
            for (int i=0; i<n; i++)
                for (int j=0; j<m; j++)
                    res = min(res, abs(a[i].x - b[j].x) + abs(a[i].y - b[j].y));
        else
            for (int k=0; k<maxN; k++) {
                int i = rand() % n, j = rand() % m;
                res = min(res, abs(a[i].x - b[j].x) + abs(a[i].y - b[j].y));
            }
            cout<<res<<endl;
    }
}