#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, P, totP;
    cin >> L >> P;

    totP = L*P;

    for (int i = 0; i < 5; ++i) {
        int p;
        cin >> p;
        cout << p-totP << ' ';
    }

    return 0;
}