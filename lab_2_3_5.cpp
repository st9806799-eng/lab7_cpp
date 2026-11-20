#include <iostream>

using namespace std;

int main(void) {
    int n;
    const int MAX_N = 80;

    cout << "Enter side size n (n > 1): ";
    cin >> n;

    if (n <= 1) {
        cout << "Sorry, the side size must be greater than 1." << endl;
        return 1;
    }

    if (n > MAX_N) {
        cout << "Sorry, the side size is too big." << endl;
        return 1;
    }

    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    return 0;
}
