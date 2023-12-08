#include <iostream>
using namespace std;
const int MAX_N = 200000+5;
int n,k,q;
int temp[MAX_N], sum[MAX_N], sum2[MAX_N];
int main() {
	cin >> n >> k >> q;
	for (int i=1; i<=n; i++) {
		int l,r;
		cin >> l >> r;
		temp[l]++;
		temp[r+1]--;
	}
	for (int i=1; i<=200000; i++) {
		sum[i] = sum[i-1] + temp[i];
		sum2[i] = sum2[i-1] + (sum[i] >= k);
	}
	for (int i=1; i<=q; i++) {
		int l,r;
		cin >> l >> r;
		cout << sum2[r] - sum2[l-1] << endl;
	}
	return 0;
}
