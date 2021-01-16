#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;

int main ()
{
    //freopen(".in", "r", stdin);
    //freopen(".out", "w", stdout);

    int n, t; cin >> n >> t;
    string s1, s2; cin >> s1 >> s2;
    
    string x = s1 + s2;
    vector<char> used(x.begin(), x.end());

    vector<char> dup;
    for (int i = 0; i < used.size(); i++) {
        long long n = count(used.begin(), used.end(), used[i]);
        if (n > 1) dup.push_back(used[i]);
    }
    
    if ((dup.size()/2)+t > 26) cout << -1;
    else {
        string y;
        for (int i = 0; i < t; i++) {
            y += dup[i];
        }
        int bruh = y.length();
        for (int i = 97; i < (97+24); i++) {
            if (count(used.begin(), used.end(), (char)i) != 0) continue;
            else cout << (char)i;
            bruh++;
            if (bruh == n) break;
        }
        
        
    }
    
    
    
}