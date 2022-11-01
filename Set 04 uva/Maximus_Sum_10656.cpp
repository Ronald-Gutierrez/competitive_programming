#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int val,n;
    while(cin>>n)
    {
        vector<int>v;
        if(n==0)
        return 0;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            if(val > 0) v.push_back(val);
        }
        int tam = v.size();
        for(int i = 0; i < tam; i++)
        {
            cout<<v[i];
            if(i<tam-1) cout<<" ";
        }

        cout<<endl;
    }
return 0;
}