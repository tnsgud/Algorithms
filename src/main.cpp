#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int row = n / 2 + 1;
    int col = n - row + 2;

    cout << row * col;

    return 0;
}