//multiples555
#include <iostream>
using namespace std;

int main() {
    long long x;

    cin >> x;

    bool printed = false;
    if (x % 3 == 0) {
        cout << "3";
    }
    else if (x % 5 == 0) {
        if (printed) {
            cout << " ";
        }
        cout << "5";
    }

    return 0;
}
