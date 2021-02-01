#include <bits/stdc++.h>
using namespace std;

int findFriendships(int teammembers, int team)
{
    int friendships = 0; 
    int x = teammembers - 1;

    for (int i = 0; i < x; i++) {   
        friendships += x - i;
    }
    return friendships;
}

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int teams, participants; cin >> participants >> teams;
    int maxTeam = participants - teams + 1;

    long double perTeam = (long double)participants / teams;

    int maxFriendships = findFriendships(maxTeam, teams);
    int minFriendships = findFriendships(floor(perTeam), teams) + findFriendships(ceil(perTeam), teams) * (teams - 1);
    cout << minFriendships << " " << maxFriendships;
}