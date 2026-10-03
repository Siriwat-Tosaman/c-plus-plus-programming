//grading
#include <iostream>
using namespace std;

int main() {
    int score;

    cin >> score;
    if (score >= 0 and score <= 100) {
        if (score >= 80) {
            cout << "Exellent";
        }
        else if (score >= 40) {
            cout << "Pass";
        }
        else {
            cout << "Fail";
        }
    }
    return 0;
}