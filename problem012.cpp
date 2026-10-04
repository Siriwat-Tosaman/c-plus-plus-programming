//operator_selection555
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (z == 1) {
        cout << x + y;
    }
    else if (z == 2) {
        cout << x - y;
    }
    else if (z == 3) {
        cout << x * y;
    }
    else if (z == 4) {
        if (y != 0) {
            cout << x / y;
        }
        else {
            cout << "cannot divide by zero";
        }
    }
    else if (z == 5) {
        if (y != 0) {
            cout << x % y;
        }
        else {
            cout << "cannot divide by zero";
        }
    }
    else {
        return 0;
    }
    return 0;
}
