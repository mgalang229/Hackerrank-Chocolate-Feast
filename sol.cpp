#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n, c, m;
	cin >> n >> c >> m;
	int w = 0, f = n / c;
	n -= c * f;
	int ans = f;
	while (w + f >= m) {
		w += f;
		int ff = w / m;
		ans += ff;
		w -= m * ff;
		f = ff;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
