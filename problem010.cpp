#include <bits/stdc++.h>

using namespace std;

int main() {
	double x, y, z;
	cin >> x >> y >> z;

	if (z == 0) {
		cout << "cannot divide by zero";
	} else {
		cout << fixed << setprecision(6) << (x + y) / z;
	}

	return 0;
}
