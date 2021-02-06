#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int min, max; min = 0; max = 0;
    for (int i = 0; i < n; i++) {
        char s; cin >> s;
        if (s == 'L') min -= 1;
        else max += 1;
    }

    cout << abs(max-min)+1;
    
}