#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// ll findGCD(ll a, ll b)
// {
//     if(b != 0) {
//         ll c = a % b;
//         findGCD(b, c);
//     }
//     return b;
// }

ll factorial(ll a)
{
    ll answer = 1;
    for (ll i = 1; i < a+1; i++) {
        answer *= i;
    }
    return answer;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b; cin >> a >> b;
    ll answer = factorial(min(a, b));
    cout << answer;
}