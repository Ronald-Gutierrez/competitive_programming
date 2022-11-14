#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int c;
    int nums[100000];
	while (cin >> c && c) {

		for(int i = 0; i< c; i++) 
		{
            cin>>nums[i];
        }
		int max = 0;
        int temp = 0;

		for (int i = 0; i < c; i++) 
		{
			temp += nums[i];
			if (temp > max)  max = temp;
			if (temp < 0)    temp = 0;
		}

		if (max > 0)	cout<<"The maximum winning streak is "<<max<<endl;
		else			cout<<"Losing streak."<<endl;
	}

	return 0;
}