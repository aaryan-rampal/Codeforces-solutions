#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int lastNumber, size, numbers;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int b = 0, ans = 0;
        for (int len = 1; len <= 9; len++) {
            b = b * 10 + 1;
            for (int m = 1; m <= 9; m++)
                if (b * m <= n) ans++;
        }
        cout << ans << endl;
    }
}