#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if(a < K)
            cout << a << ' ';
    }

    return 0;
}