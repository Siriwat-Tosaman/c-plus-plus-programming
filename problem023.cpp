#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        for (int i = x; i >= y; i--) {
            cout << i << " ";
        }
        return 0;
    }
    for (int i = x; i <= y; i++) {
        cout << i << " ";
    }
    
    return 0;
}