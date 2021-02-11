/*
Runs in O(n+m) which is apparently the fastest according to the editorial :D
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
    for (int z = 0; z < t; z++) {
        // n = bottom, m = left
        int n, m;
        cin >> n >> m;
        vector<int> leftTrain(100);
        vector<int> bottomTrain(100);

        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            leftTrain[b - 1]++;
        }
        for (int i = 0; i < m; i++) {
            int b;
            cin >> b;
            bottomTrain[b - 1]++;
        }

        int count = 0;
        for (int i = 0; i < 100; i++) {
            count += min(leftTrain[i], bottomTrain[i]);
        }
        cout << count << "\n";
    }
}
