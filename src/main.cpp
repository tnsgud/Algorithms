#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, h;
    cin >> w >> h;

    cout << w * h / 2;

    return 0;
}