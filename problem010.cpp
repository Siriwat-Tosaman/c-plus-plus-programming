//no_divide_by_zero
#include <iostream>
using namespace std;

int main() {
    double x, y, z;

    cin >> x >> y >> z;
    double sum_xy = x+y;

    if (z != 0) {
        cout << sum_xy / z;
    }
    else {
        cout << "cannot divide by zero";
    }
    return 0;
}