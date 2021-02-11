/*
Had to look up the editorial for this one.
*/

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
        int n;
        cin >> n;
        int oneGram = 0;
        int twoGram = 0;
        for (int i = 0; i < n; i++) {
            int can;
            cin >> can;
            if (can == 1)
                oneGram++;
            else
                twoGram++;
        }

        if (twoGram % 2 != 0) {
            if (1 < oneGram && oneGram % 2 == 0) {
                cout << "YES\n";
                continue;
            }
        } else {
            if (oneGram % 2 == 0) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
}
