/*
This took me a while to get. Around about an hour and had to look at
editorial too.
*/

#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen((s + ".in").c_str(), "r", stdin);
    // freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("");

    long double n, r;
    cin >> n >> r;
    long double x = sin(M_PI / n);

    typedef numeric_limits<double> limit;
    cout.precision(limit::max_digits10);
    cout << (x * r) / (1 - x);
}