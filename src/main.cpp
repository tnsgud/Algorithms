#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;

    cout.precision(10);
    cout << a * a * sqrt(3) / 4;

    return 0;
}