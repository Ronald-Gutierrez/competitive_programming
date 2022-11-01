#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() 
{
    int n;
    int count=1;
    while(cin >> n) 
    {
        vector<int> nums;
        int val;
        for(int i = 0; i < n; i++){
            cin>>val;
            nums.push_back(val);
        }
        sort(nums.begin(), nums.end()); //ordenar vector
        cout << "Case " << count << ":" << endl;
        count++;

        int m;
        cin >> m;
        while(m--) 
        {
            int tmp_l, tmp_r;
            int l = 0, r = nums.size()-1, max = INT_MAX;
            int x=0;
            cin>>x;
            while (r > l) 
            { 
            
                if (abs(nums[l] + nums[r] - x) < max) 
                { 
                    tmp_l = l; 
                    tmp_r = r; 
                    max = abs(nums[l] + nums[r] - x); 
                } 

                if (nums[l] + nums[r] > x)  r--; 

                else  l++; 
            } 
            cout <<"Closest sum to "<< x <<" is "<< nums[tmp_l] + nums[tmp_r]<< "." << endl;
        }
    }

	return 0;
}