#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int times[26];
    for (int i = 0; i < 26; ++i) {
        times[i] = i/3+3;

        if(i == 18 || i == 21 || 24 <= i) {
            times[i]--;
        }
    }

    string s;
    cin >> s;

    int sum =0;
    for(auto c:s) {
        sum += times[c-65];
    }

    cout << sum;

    return 0;
}