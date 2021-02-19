#include <bits/stdc++.h>
using namespace std;
#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int duplicates[200001];

bool checkDuplicates(int i) {
    duplicates[i]++;
    if (duplicates[i] == 3) {
        return false;
    }
    return true;
}

int main() {
    FAST

        int n;
    cin >> n;
    vector<int> array(n);
    bool canHaveArray = true;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (!checkDuplicates(array[i])) {
            canHaveArray = false;
            break;
        }
    }

    if (canHaveArray) {
        vector<int> increasing;
        vector<int> decreasing;
        for (int i = 0; i < n; i++) {
            if (duplicates[array[i]] == 2) {
                decreasing.push_back(array[i]);
                duplicates[array[i]]--;
            } else
                increasing.push_back(array[i]);
        }
        sort(increasing.begin(), increasing.end());
        sort(decreasing.begin(), decreasing.end(), greater<int>());
        cout << "YES\n" << increasing.size() << "\n";
        for (int i = 0; i < increasing.size(); i++) {
            cout << increasing[i] << " ";
        }
        cout << "\n" << decreasing.size() << "\n";
        for (int i = 0; i < decreasing.size(); i++) {
            cout << decreasing[i] << " ";
        }
    } else
        cout << "NO";
}