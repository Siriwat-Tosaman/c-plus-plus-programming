#include "iostream"
using namespace std;

int main() {
    int count_odd = 0, count_even = 0;
    int num;
    for (int i = 0; i < 8; i++) {
        cin >> num;
        if (num % 2 == 0) {
            count_even += num;
        }
        else {
            count_odd += num;
        }
    }
    if (count_even == count_odd) {
        cout << "equal" << endl;
    }
    else if (count_even > count_odd) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }

    cout << count_even << endl << count_odd;
    return 0;
}