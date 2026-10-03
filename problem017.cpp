//reserve_van
#include <iostream>
using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 <= d2 && d2 <= d3) {
        cout << "A";
    }
    else if (d2 <= d3) {
        cout << "B";
    }
    else {
        cout << "C";
    }
    return 0;
}