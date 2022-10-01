#include <iostream>
#include <vector>

using namespace std;

int find(int a, int* v) {
    if(v[a] < 0) {
        return a;
    }
    return v[a] = find(v[a], v);
}

void Union(int a, int b, int* v) {
    a = find(a, v);
    b = find(b, v);

    if(a == b) {
        return;
    }

    if(v[a] == v[b]) {
        v[a] += v[b];
        v[b] = a;
        return;
    }

    if(v[a] > v[b]) {
        v[b] += v[a];
        v[a] = b;
        return;
    }

    if(v[a] < v[b]) {
        v[a] += v[b];
        v[b] = a;
        return;
    }
}
int main() 
{

    int m, n;
    cin>>m>>n;
    int v[m];
    for(int i= 0; i < m; i++) 
        v[i] = i;

    while(n--) {
        
        char c,a,b;
        cin>>c>>a>>b;;
        if(c == '?') {
            if(find(a,v) == find(b,v)) cout << "yes" << endl;
            else  cout << "no" << endl;
        }
        else Union(a, b,v);

    }
    return 0;
}