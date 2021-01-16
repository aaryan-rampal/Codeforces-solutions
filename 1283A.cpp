#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <limits>
using namespace std;

#define vi = vector<int>
#define ti = min[i]
#define hi = hours[i]

int main ()
{
    int t; cin >> t;
    int minLeft;
    for (int i = 0; i < t; i++)
    {
        minLeft = 0;
        vector<int> hours(t);
        vector<int> min(t);
        cin >> hours[i] >> min[i];
        if (hours[i] == 0) minLeft += 60 * 11;
        else minLeft += (23-hours[i]) * 60;
        if (!(min[i] == 0)) minLeft += 60 - min[i];
        cout << minLeft << "\n";
    }
}