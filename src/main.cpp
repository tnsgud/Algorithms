#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a < 0) {
        cout << -1 * a * c + d + e * b;
    } else if (a > 0) {
        cout << e * (b - a);
    } else {
        cout << d + e * b;
    }

    return 0;
}