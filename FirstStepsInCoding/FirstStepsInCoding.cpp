#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    double bonusPoint = 0.0;

    if (x <= 100) {
        bonusPoint = 5;
    }
    else if (x > 1000) {
        bonusPoint = 0.10 * x;
    }
    else {
        bonusPoint = 0.20 * x;
    }
    if (x % 2 == 0) {
        bonusPoint += 1;
    }
    else if (x % 10 == 5) {
        bonusPoint += 2;
    }

    cout << bonusPoint << '\n';
    cout << x + bonusPoint << '\n';

    return 0;
}
