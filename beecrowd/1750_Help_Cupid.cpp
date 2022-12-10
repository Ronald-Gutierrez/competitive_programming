#include<bits/stdc++.h>
#include<iostream>
#include <cmath>
using namespace std;
#define MAX 1000
int z_hora[MAX];

int dif_min(int i, int j) {
	return min(abs(z_hora[i] - z_hora[j]), 24 - abs(z_hora[i] - z_hora[j]));
}

int main() 
{
    int n;
	while (cin >> n) {

		for (int i = 0; i < n; i++)
			cin >> z_hora[i];

		sort(z_hora, z_hora + n);

		int aux1 = 0, aux2 = 0;

		for (int i = 0; i < n - 1; i += 2)
			aux1 += dif_min(i, i + 1);

		for (int i = 1; i < n - 2; i += 2)
			aux2 += dif_min(i, i + 1);

		aux2 += dif_min(0, n - 1);

		cout << min(aux1, aux2) << endl;
	}
    return 0;
}