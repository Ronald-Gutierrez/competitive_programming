#include <bits/stdc++.h>
#include <algorithm>
#define inf 10000
using namespace std;
void solve()
{
    int c;
    cin>>c;
    int paga, N;
    int M[10001], A[101];
    while(c--){
        cin>>paga>>N;
        for(int i = 1; i <= N; i++)
            cin>>A[i];
        for(int i = 1; i <= 10000; i++)
            M[i] = inf;
        M[0] = 0;

        for(int i = 1; i <= N; i++)
            for(int j = 10000; j > 0; j--)
                if(j - A[i] >= 0 && M[j - A[i]] + 1 < M[j])
                    M[j] = M[j - A[i]] + 1 ;
        int i;
        for(i = paga; M[i] == inf; i++);
        cout<<i<<" "<<M[i]<<endl;

    }
}
int main() {

    solve();
    return 0;
}