#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long M, N;
    if (!(cin >> M >> N))
        return 0;
    long long ans = (M * N) / 2;
    cout << ans << '\n';
    return 0;
}