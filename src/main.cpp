#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int t;
        cin >> t;
        sum += t;
    }

    cout << sum;

    return 0;
}