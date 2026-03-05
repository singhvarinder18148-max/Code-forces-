#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (cin >> s)
    {
        set<char> distinctChars(s.begin(), s.end());
        int distinct = distinctChars.size();

        if (distinct % 2 == 0)
        {
            cout << "CHAT WITH HER!" << '\n';
        }
        else
        {
            cout << "IGNORE HIM!" << '\n';
        }
    }

    return 0;
}