#include<vector>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN = 1000010;
int n , m , k , num;
vector<int>v[MAXN];

int main(){
    int x;
    while(scanf("%d%d",&n , &m) != EOF){
         for(int i = 1 ; i <= n ; i++){
             scanf("%d" , &x);
             v[x].push_back(i);
         }
         for(int i = 1 ; i <= m ; i++){
             scanf("%d%d" , &k , &num); 
            if (k - 1 < v[num].size())
               printf("%d\n", v[num][k - 1]);
            else
               printf("0\n");
         }
    }
    return 0;
}
