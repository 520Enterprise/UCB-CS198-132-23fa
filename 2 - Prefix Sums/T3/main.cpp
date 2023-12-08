#include <iostream>
using namespace std;
const int MAX_N = 100000 + 10;
int n, k;
int ans;
int a[MAX_N], t[MAX_N], sum_a[MAX_N], sum_t[MAX_N];
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
		if (t[i]) {
			ans += a[i];
			a[i] = 0;
		}
		sum_t[i] = sum_t[i - 1] + (t[i] == 0);
		sum_a[i] = sum_a[i - 1] + a[i];
	}
	int max_sa = 0;
	for (int l = 1; l + k - 1 <= n; l++) {
		int r = l + k - 1;
		max_sa = max(max_sa, sum_a[r] - sum_a[l - 1]);
	}
	cout << ans + max_sa << endl;
	return 0;
}
