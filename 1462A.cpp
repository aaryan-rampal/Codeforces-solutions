#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for (int j = 0; j < t; j++) {
        int n; cin >> n;
        vector<int> sequence(n);

        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
        }

        if(n > 1) {
            vector<int> temp = sequence;
            int forward = 0; int reverse = n-1;
            int nDup = n;

            if(n % 2 != 0) {
                sequence[n-1] = temp[floor(n/2)];
                nDup -= 1;
            }
            
            for (int i = 0; i < nDup; i += 2) {
                sequence[i] = temp[forward];
                sequence[i+1] = temp[reverse];
                forward++; reverse--;
            }  
        }
        
        for (int i = 0; i < n; i++) {
            cout << sequence[i] << " ";
        }
        cout << "\n";
    }   
}