#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, q;
    cin >> N;

    q = sqrt(N);

    if((q*q) < N) {
        ++q;
    }

    cout << q;

    return 0;
}