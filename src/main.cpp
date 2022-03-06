#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int antenna, eye;
    cin >> antenna >> eye;

    if(antenna>=3 && eye <= 4) {
        cout << "TroyMartian\n";
    }

    if(antenna <= 6 && eye >= 2) {
        cout << "VladSaturnian\n";
    }

    if(antenna <= 2 && eye <= 3) {
        cout << "GraemeMercurian\n";
    }

    return 0;
}