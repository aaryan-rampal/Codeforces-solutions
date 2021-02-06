#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long d1, d2, d3; cin >> d1 >> d2 >> d3;
    long long minDistance = min(d1*2+d3*2, d2*2+d3*2);
    long long minDistance2 = min(d1*2 + d2*2, d1+d2+d3);
    cout << min(minDistance, minDistance2);
}