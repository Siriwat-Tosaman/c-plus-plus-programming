#include <iostream>
using namespace std;

int main() {
    int k, k1, k2, s1, s2, g;
    
    if (k1 < k && k2 < k) {
        if (s1 >= 9 && s2 >= 9) {
            if (s1 == s2) {
                if (g == 1) {
                    cout << "1";
                }
                else if (g == 2) {
                    cout << "2";
                }
            }
            else if (s1 > s2) {
                cout << "1";
            }
            else if (s1 < s2) {
                cout << "2";
            }
        }
        else if (s1 >= 9) {
            cout << "1";
        }
        else if (s2 >= 9) {
            cout << "2";
        }
    }
    return 0;
    
}
