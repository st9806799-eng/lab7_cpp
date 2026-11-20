#include <iostream>

using namespace std;

int main(void) {
    double pi4 = 0.0;
    long n;

    cout << "Number of iterations? ";
    cin >> n;

    double sign = 1.0;
    for (long i = 0; i < n; i++) {
        pi4 += sign / (2.0 * i + 1.0);
        sign = -sign;
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;

    return 0;
}
