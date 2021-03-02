#include <bits/stdc++.h>
using namespace std;

bool yesno(vector<int> sorted, vector<int> arr, int small) {
    for (int i = 0; i < arr.size(); i++) {
        if (sorted[i] != arr[i] && arr[i] % small != 0) return false;
    }
    return true;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    for (int qad = 0; qad < t; qad++) {
        int n, small = INT_MAX; 
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            small = min(small, arr[i]);
        }

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        if (yesno(sorted, arr, small)) cout << "YES\n";
        else cout << "NO\n";
    }
}
