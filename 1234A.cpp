#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long q; cin >> q;
    for (long long j = 0; j < q; j++) {
        long long n; cin >> n;
        long long sum = 0;

        for (long long i = 0; i < n; i++) {
            long long x; cin >> x;
            sum += x;
        }

        int answer = ceil((long double)sum/n);
        cout << answer << "\n";
    }
}