#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string a = "*";

    while(N--) {
        cout << a << '\n';
        a += "*";
    }

    return 0;
}