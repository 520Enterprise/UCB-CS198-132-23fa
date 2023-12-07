#include <iostream>
using namespace std;
const int MAX_N = 100005;
int a[MAX_N], n;
int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) cin >> a[i];
		int id_min = 1, id_max = 1;
		for (int i = 2; i <= n; ++i) {
			if (a[i] < a[id_min]) id_min = i;
			if (a[i] > a[id_max]) id_max = i;
		}
		cout<<min(id_max, id_min)<<" "<<max(id_max, id_min)<<endl;
	}
	return 0;
}
