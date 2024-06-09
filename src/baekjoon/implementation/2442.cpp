//
// Created by 박순형 on 2024. 6. 9..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++) cout << ' ';
        for(int j = 1; j <= 2 * i - 1; j++) cout << '*';
        cout << "\n";
    }

    return 0;
}
