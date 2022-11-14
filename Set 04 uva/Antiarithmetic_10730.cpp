#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int nums[10003];
    while (cin >> n && n) {
        char t_p;
        cin >> t_p;
        for (int i = 0; i < n; i++) {
            cin >>nums[i];
        }
        bool isSeq = true;
        for (int i = 0; i < n; i++) {
            for (int j = 1; i + 2 * j < n; j++) {
                if ((nums[i] < nums[i + j] && nums[i + j] < nums[i + 2 * j]) || 
                    (nums[i] > nums[i + j] && nums[i + j] > nums[i + 2 * j])) {
                    isSeq = false;
                    break;
                }
            }
        }

        if (isSeq) cout << "yes\n";
        else       cout << "no\n";
        
    }
}