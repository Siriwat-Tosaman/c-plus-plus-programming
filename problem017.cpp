//reserve_van
#include <iostream>
using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 == d2 == d3) {
        cout << "A";
        return 0;
    }
    if (d1 > d2 && d2 == d3) {
        cout << "B";
        return 0;
    }
    if (d1 <= d2 && d1 <= d3) {
        cout << "A";
        return 0;
    }
    if (d2 <= d1 && d2 <= d3) {
        cout << "B";
        return 0;
    }
    if (d3 <= d2 && d3 <= d1) {
        cout << "C";
        return 0;
    }
}