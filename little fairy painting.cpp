#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            int n;
            cin >> n;
            vector<bool> seen(2005, false);
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                if (!seen[a])
                {
                    seen[a] = true;
                    count++;
                }
            }

            while (!seen[count])
            {
                seen[count] = true;
                count++;
            }

            cout << count << "\n";
        }
    }
    return 0;
}