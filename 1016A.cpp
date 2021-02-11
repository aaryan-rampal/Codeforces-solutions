#include <bits/stdc++.h>
using namespace std;
#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    FAST

        int m,
        n;
    cin >> n >> m;
    vector<int> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    int runningCount = 0;
    int pagesTurned;
    for (int i = 0; i < n; i++) {
        pagesTurned = 0;
        runningCount += names[i];
        if (runningCount >= m) {
            pagesTurned = floor(runningCount / m);
            runningCount -= m * pagesTurned;
        }
        cout << pagesTurned << " ";
    }
}