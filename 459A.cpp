#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);

int main() 
{
    fast 

    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        int side = y2-y1;
        cout << x1+side << " " << y1 << " " << x2+side << " " << y2;
    } else if (y1 == y2) {
        int side = x2-x1;
        cout << x1 << " " << y1+side << " " << x2 << " " << y2+side;
    } else if (y2-y1 == x2-x1) {
        int side = y2-y1;
        cout << x1 << " " << y1+side << " " << x2 << " " << y2-side;
    } else cout << "-1";
}