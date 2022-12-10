#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {

    // while(true){
    //     int a[5];
    //     int b[5];
    //     for(int i=0;i < 5; i++)
    //     {
    //         cin>>a[i];
    //     }
    //     for(int i=0;i < 5; i++)
    //     {
    //         cin>>b[i];
    //     }
    //     bool aux=true;
    //     for(int i=0;i < 5; i++)
    //     {
    //         if(a[i] != b[i])
    //             continue;
    //         else  {
    //             cout<< "N" <<endl;
    //             aux=false;
    //             break;
    //         }
    //     }
    //     if(aux) cout<<"Y"<<endl;
    // }

    int x1,x2,x3,x4,x5, y1,y2,y3,y4,y5;
    while(cin >> x1 >> x2 >> x3 >> x4 >> x5 >> y1 >> y2 >>y3 >>y4 >>y5)
    {
        if(x1 != y1 && x2 != y2 && x3 != y3 && x4 != y4 && x5 != y5) cout<< "Y" <<endl;

        else  cout<< "N" <<endl;

    }
    return 0;

}