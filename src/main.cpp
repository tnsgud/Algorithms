#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;

    for (int i = 1; i <= l; ++i) {
        if(a <= c * i && b <= d*i) {
            cout << l-i;
            break;
        }
    }

    return 0;
}