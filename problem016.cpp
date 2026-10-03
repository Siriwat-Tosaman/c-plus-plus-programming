//survival_bag
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int w = x / 3, b = y / 4, e = z / 2;
    int array[3] = {w, b, e};
    int num = array[0];
    for (int i = 1; i < 3; i++) {
        if (array[i] < num) {
            num = array[i];
        }
    }

    int last_w = x - (num * 3), last_b = y - (num * 4), last_e = z - (num * 2);
    cout << num << " " << last_w << " " << last_b << " " << last_e;
    return 0;
}