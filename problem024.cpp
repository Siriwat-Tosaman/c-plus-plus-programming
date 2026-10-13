#include <iostream>
using namespace std;

int main() {
     int n, max = 0, min = 10000000000;

     for (int i = 1; i <= 8; i++) {
        cin >> n;
        if (n > 0) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
     }

     cout << max << endl << min;
     return 0;
}