#include <iostream>
using namespace std;

int main ()
{
    int s, type1, type2, ping1, ping2; cin >> s >> type1 >> type2 >> ping1 >> ping2;
    
    int time1 = (ping1*2) + (type1*s);
    int time2 = (ping2*2) + (type2*s);

    if(time1 == time2) {
        cout << "Friendship";
    } else {
        string x = time1 < time2 ? "First" : "Second";
        cout << x;
    }
}