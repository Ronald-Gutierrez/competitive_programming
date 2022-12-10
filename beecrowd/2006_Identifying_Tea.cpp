#include <bits/stdc++.h>

using namespace std;


int main()
{
    int  n,a, count=0;

    while(cin>>n)
    {

        for(int i=0; i < 5; i++)
        {
            cin >> a;
            if(a == n) count++;
        }
        cout << count<<endl;
    }
    return 0;
}
