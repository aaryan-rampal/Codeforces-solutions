#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0);cin.tie(0);

bool checkDuplicate(string s) 
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i+1]) return true;
    }
    return false;
}

string beautiful(string s) 
{
    bool isQuestion = false;
    vector<int> startEnd;
    vector<string> stringComponents;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?') {
            isQuestion = true;
            startEnd[0] = i;
        } else if (isQuestion && s[i] != '?') {
            startEnd[1] = i;
            isQuestion = false;
            string test = generateString(s, startEnd[0], startEnd[1]);
        }
    }
    
}

string generateString(string s, int start, int end) 
{
    for (int i = 0; i < end - start - 1; i++)
    {
        int missingChar = ('a' + 'b' + 'c') - s[start] + s[end];
        s[i + 1] = (char)missingChar;
    }
    
}

int main() 
{
    FAST
    
    int t; cin >> t;
    for (int qad = 0; qad < t; qad++)
    {
        string s; cin >> s;
        if (checkDuplicate) cout << "-1\n";
        else {

        }
    }
    
}