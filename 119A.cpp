#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findGCD(ll a, ll b)
{
    if(b != 0) {
        ll c = a % b;
        findGCD(b, c);
    }
    return b;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, n; cin >> a >> b >> n;
    while(true) {
        if(findGCD(a, n) != 0) {
            n -= findGCD(a, n);
        } else {
            cout << "1";
            break;
        }
        if (findGCD(b, n) != 0) {
            n -= findGCD(a, n);
        } else { 
            cout << "0";
            break;
        }
    }
}