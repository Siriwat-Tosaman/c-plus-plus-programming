//no_divide_by_zero555
#include <iostream>
using namespace std;

int main() {
    double long x, y, z;

    cin >> x >> y >> z;
    double long sum_xy = x+y;

    if (z != 0) {
        cout << sum_xy / z;
    }
    else {
        cout << "cannot divide by zero";
    }
    return 0;
}
