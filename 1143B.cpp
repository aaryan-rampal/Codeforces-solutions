#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);
#define input freopen("TEST.in", "r", stdin); freopen("TEST.out", "w", stdout);

int main() 
{
    //input 
    fast

    int n; cin >> n;
    if (n < 10) cout << n;
    else {
        string b = to_string(n);
        unsigned long long sum = pow(9, b.length()-1);
        sum *= b[0] - '0' - 1;
        cout << sum;
    }
}