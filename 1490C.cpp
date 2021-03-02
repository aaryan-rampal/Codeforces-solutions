#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen((s + ".in").c_str(), "r", stdin);
    //freopen((s + ".out").c_str(), "w", stdout);
}

vector<long long> findCubes() {
    vector<long long> vec(10000);
    for (long long i = 1; i < 10000; i++) {
        vec[i - 1] = i * i * i;
    }
    return vec;
}

int findA(long long x, vector<long long> arr) {
    for (int i = 1; (i * i * i) <= x; i++) {
        if (find(arr.begin(), arr.end(), (x - (i * i * i))) != arr.end()) return 1;
    }
    return 0; 
}

int main() {
    setIO("");
    vector<long long> arr = findCubes();
    int t; cin >> t;

    for (int qad = 0; qad < t; qad++) {
        long long x; cin >> x;
        if (findA(x, arr) == 1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}