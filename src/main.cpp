#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x;
    cin >> x;

    cout.precision(6);
    cout << fixed << 100.00 / (x * (1.609344 / 3.785411784));

    return 0;
}