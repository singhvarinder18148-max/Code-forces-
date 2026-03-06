#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n)
    {
        vector<int> givers(n + 1);

        for (int i = 1; i <= n; ++i)
        {
            int p;
            cin >> p;
            givers[p] = i;
        }
        for (int i = 1; i <= n; ++i)
        {
            cout << givers[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}