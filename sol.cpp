#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, mx = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			mx = max(mx, a);
		}
		cout << mx << '\n';
	}
	return 0;
}
