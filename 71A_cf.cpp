#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    if (sz <= 10) {
        cout << s << "\n";
        return;
    }
    cout << s[0] << sz - 2 << s[sz - 1] << "\n";
}


int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        solve();

    return 0;
}