#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{

    int n;
    cin>>n;
    int arr[n],front[n],back[n],i,j;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        front[i]=1;
        back[i]=1;
    }
    int maxi=0;
    for(i=n-1;i>=0;i--)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
                front[i]=max(front[i],front[j]+1);
            if(arr[i]>arr[j])
                back[i]=max(back[i],back[j]+1);
        }           
        maxi=max(front[i]+back[i]-1,maxi);
    }
        
    cout<<maxi<<endl;

    return 0;
}