#include <bits/stdc++.h>
using namespace std;
#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    FAST

        int t;
    cin >> t;
    for (int qad = 0; qad < t; qad++) {
        int x, n, m;
        cin >> x >> n >> m;
        bool canWin = false;
        int lowestHP = x;

        for (int i = 0; i < n; i++) {
            lowestHP = min(lowestHP, (int)floor(lowestHP / 2) + 10);
        }
        for (int i = 0; i < m; i++) {
            lowestHP -= 10;
            if (lowestHP <= 0) {
                canWin = true;
                break;
            }
        }

        if (canWin)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}