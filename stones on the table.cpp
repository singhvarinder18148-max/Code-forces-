#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i + 1 < n; ++i)
    {
        if (s[i] == s[i + 1])
            ++ans;
    }
    cout << ans << '\n';
    return 0;
}