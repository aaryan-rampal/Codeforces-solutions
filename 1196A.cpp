#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q; 
    for (int i = 0; i < q; i++)
    {
        long long x, y, z; cin >> x >> y >> z;
        cout << (x+y+z)/2 << endl;
    }
}