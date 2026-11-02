#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int x, n;
    cin >> x;

    int nearest = 0;
    int min_diff = INT_MAX;

    for (int i = 0; i < 8; i++) {
        cin >> n;
        int diff = abs(n - x);
        if (diff < min_diff) {
            min_diff = diff;
            nearest = n;
        }
    }

    cout << nearest;
    return 0;
}