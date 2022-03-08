#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0) {
        cout << min(a, b);
    } else {
        cout << 0;
    }

    return 0;
}