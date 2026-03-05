#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    if (!(cin >> n >> m >> a))
        return 0;

    long long tiles_x = (n + a - 1) / a;
    long long tiles_y = (m + a - 1) / a;

    long long result = tiles_x * tiles_y;
    cout << result << '\n';
    return 0;
}