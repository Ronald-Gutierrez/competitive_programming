#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int val,grados,aux_hor,aux_min;
    bool check;
    while(cin >>val)
    {
        check=aux_hor=aux_min=grados=0;
        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < 59; j++)
            {
                aux_min += 6;
                if( j % 12 == 0)
                    aux_hor += 6;
                grados = aux_min - aux_hor;
                if(grados == val || (360 - grados) == val)
                {
                    check = true;
                    break;
                }
            }
        }
        if(check)
            cout<<"Y"<<endl;

        else
            cout<<"N"<<endl;
    }
    return 0;
}

/* SOLUCION MAS FACTIBLE

int main()
{
    int n;
    while(cin>>n){
        if(n % 6 ==0)  cout<<"Y"<<endl;
        else  cout<<"N"<<endl;
    }
    return 0;
}

*/