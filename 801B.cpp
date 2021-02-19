#include <bits/stdc++.h>
using namespace std;
#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

int main() {
    FAST

        string x,
        y;
    cin >> x >> y;
    bool stringExists = true;
    for (int i = 0; i < x.length(); i++) {
        if ((int)x[i] < (int)y[i]) {
            stringExists = false;
            break;
        }
    }

    if (stringExists) {
        string z = "";
        for (int i = 0; i < x.length(); i++) {
            if (x[i] == y[i]) {
                if (x[i] == 'z')
                    z += 'z';
                else
                    z += (char)((int)x[i] + 1);
            } else {
                z += y[i];
            }
        }
        cout << z;
    } else
        cout << "-1";
}