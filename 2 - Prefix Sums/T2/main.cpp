#include <iostream>
using namespace std;
const int MAX_N = 150005;
int m, sum[MAX_N], a[MAX_N], gap;
int main() {
	cin>>m>>gap;
	for (int i = 1; i <= m; i++) {
		cin>>a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	int minn = 0x7fffffff, minn_index = 0;
	for (int i = 1; i <= m; i++) {
		int j = i + gap - 1;
		if (j > m) break;
		if (sum[j] - sum[i - 1] < minn) {
			minn = sum[j] - sum[i - 1];
			minn_index = i;
		}
	}
	cout<<minn_index<<endl;
	return 0;
}
