#include <iostream>
#include <string>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string players;
    if (cin >> players)
    {

        if (players.find("0000000") != string::npos || players.find("1111111") != string::npos)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}