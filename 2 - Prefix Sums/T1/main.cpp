#include <iostream>
using namespace std;
const int MAX_N = 100005;
int m, sum[MAX_N];
string s;
int main() {
	cin>>s>>m;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) sum[i] = sum[i - 1] + 1;
		else sum[i] = sum[i - 1];
	}
	while (m--) {
		int l, r;
		cin>>l>>r;
		cout<<sum[r - 1] - sum[l - 1]<<endl;
	}
	return 0;
}
