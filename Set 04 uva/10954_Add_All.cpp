#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int c;
    while (cin >> c && c) 
    {
        int total = 0;
        vector<int> nums;
        nums.resize(c);
        //nums.reverse():
        for (int i = 0; i< c; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        while (nums.size() > 1) 
        {
            int aux = nums[0] + nums[1];
            total += aux;
            nums[1] = aux;
            nums.erase(nums.begin());
        }
        cout<<total<<endl;
    }
    return 0;
}