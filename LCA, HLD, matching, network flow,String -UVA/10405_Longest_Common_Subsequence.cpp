#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int LCS(string str1,string str2 )
 {
    int n = str1.size();
    int m = str2.size();
 	int lcs[n + 1][m + 1];
 	for(int i = 0 ;i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0) {
                lcs[i][j] = 0;
                
            }
            else if(str1[i - 1] == str2[j - 1]) lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
	 return lcs[n][m];
 }

int main() 
{
	string str1,str2;
	 while(getline(cin, str1))
     {
	 	getline(cin, str2);
        cout << LCS(str1,str2) << endl;
	 }
	
    return 0;
}