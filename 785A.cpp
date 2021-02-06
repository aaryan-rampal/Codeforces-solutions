#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<long long> wealth(n);
    long long sum = 0; long long maxElement = 0;
    for (int i = 0; i < n; i++) {
        cin >> wealth[i];
        sum += wealth[i];
        maxElement = max(wealth[i], maxElement);
    }

    cout << (maxElement*n) - sum;    
}