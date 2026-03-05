#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    if (cin >> x)
    {
        long long ans = (x + 4) / 5;
        cout << ans << '\n';
    }
    return 0;
}