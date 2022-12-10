#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;
 
int main()
{
    char s[1000005];
    while(scanf("%s", &s) == 1)
    {
        if(s == ".") break;
           
        int max=1;
        
        int n = strlen(s);
        for(int i=1; i < n ; i++)
            while(s[i] != s[i % max]) max++;

        if(n % max != 0) cout << "1" << endl;
        else cout << n / max << endl;
    }
    return 0;
}