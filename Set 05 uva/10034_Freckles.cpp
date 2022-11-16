#include <bits/stdc++.h>
#include <math.h>
#define MAX 105
using namespace std;

float x[MAX], y[MAX];
int intree[MAX];

float dist(float a, float b){
    return sqrt(a*a+b*b);
}
int main()
{
  int T,N, c,pos;
  float dx,dy, len,min,peso;

  cin>>T;
  while(T--)
  {
    cin >> N;
    for(int i=0;i<N;i++)
      intree[i]=0;

    for(int i=0;i<N;i++)
      cin >> x[i] >> y[i];  

    // Algoritmo de Prim
    c=1;
    intree[0]=1;
    peso=0;
    while(c<N)
    {
        min = -1.0;
        for(int i=0;i<N;i++) 
        {
            if(intree[i])
            {
                for(int j=0;j<N;j++) 
                {
                    if(!intree[j])
                    {
                        dx=x[i]-x[j]; 
                        dy=y[i]-y[j];
                        len=dist(dx,dy);
                        if(min == -1.0 || len < min)
                        {
                            min=len;
                            pos=j;
                        }
                    }
                }
            }
        }
      intree[pos]=1;
      peso+=min;
      c++;
    }
    cout << setprecision(2) << fixed << peso << endl;
    if(T>0)
      cout << endl;
  }
  return 0;
}