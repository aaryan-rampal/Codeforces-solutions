#include <bits/stdc++.h>
using namespace std;

vector<int> countOcurrences(string str, vector<int> ocurrences)
{
    for (char s : str) {
        ocurrences[(int)s-'a']++;
    }
    return ocurrences;
}

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    vector<int> ocurrences(26);
    for (int j = 0; j < t; j++) {
        int numberOfCharacter = 0;
        int n; cin >> n;
        fill(ocurrences.begin(), ocurrences.end(), 0);

        for (int i = 0; i < n; i++) {
            string str; cin >> str;
            ocurrences = countOcurrences(str, ocurrences);
            numberOfCharacter += str.length();
        }

        bool cannotBeDivided = false;
        for (int i = 0; i < 26; i++) {
            if (ocurrences[i] % n != 0) {
                cannotBeDivided = true;
                break;
            }
        }

        if (cannotBeDivided) cout << "NO\n";
        else cout << "YES\n";
    }  
}