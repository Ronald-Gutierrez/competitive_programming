#include <iostream>
#include <vector>
using namespace std;

long long query(vector<int> &vec,int i) {
    long long sum = vec[0];
    while (i > 0) {
        sum += vec[i];
        i -= (i & -i);
    }
    return sum;
}
void update(vector<int> &vec,int i, int v) {
    while (i <= vec.size()) {
        vec[i] += v;
        i += (i & (-i));
    }
}


int main() {
	ios::sync_with_stdio(false);

	int N, Q;
	cin >> N >> Q;
    vector<int> tree;
    for(int i=0;i<N;i++) tree.push_back(0);
    
	for (int i = 0; i < Q; ++i) {
		char c; 
        cin >> c;
		if (c == '+') {
			int p, v;
			cin >> p >> v;
			update(tree,p, v);
		}
		else {
			int p;
			cin >> p;
			cout << query(tree,p) << '\n';
		}
	}

	return 0;
}