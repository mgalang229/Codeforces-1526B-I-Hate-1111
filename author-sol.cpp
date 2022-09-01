#include <bits/stdc++.h>
using namespace std;

/*

11, 111, 1111, 11111, ...

corner case: x < 11

*/

void test_cases() {
	int x;
	cin >> x;
	while (x > 0) {
		if (x % 11 == 0) {
			x = 0;
			break;
		}
		x -= 111;
	}
	cout << (x == 0 ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
