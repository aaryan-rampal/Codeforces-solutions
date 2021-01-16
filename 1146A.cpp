#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <limits>

using namespace std;
using db = long double;
using str = string;

int main ()
{
    str x; cin >> x;
    const char *array = x.c_str();
    db count = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (array[i] == 'a') count++;
    }
    if (count > x.length()/2) cout << x.length();
    else cout << (count*2) - 1;
}