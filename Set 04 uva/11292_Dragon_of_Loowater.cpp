#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n,m,v;
    while(cin>>n>>m && (n|| m)){

        vector<int> dragones;
        vector<int> caballeros;
        for(int i=0;i<n;i++)
        {
            cin >> v;
            dragones.push_back(v);
        }
        for(int i=0;i<m;i++)
        {
            cin >> v;
            caballeros.push_back(v);
        }

        sort(dragones.begin(),dragones.end());
        sort(caballeros.begin(),caballeros.end());

        int monedas=0;
        int i=0;
        int j=0;
        while(i<n && j<m){
            while(dragones[i] > caballeros[j] && j<m) j++;
            if(j == m) break;
            monedas += caballeros[j];
            i++; j++;
        }
        if(i == n)  cout<<monedas<<endl;
        else        cout<<"Loowater is doomed!"<<endl;
        
    }
}