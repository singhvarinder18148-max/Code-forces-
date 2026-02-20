#include <iostream>
using namespace std;
int main()
{

    int rooms;
    cin >> rooms;
    int room(0);

    while (rooms--)
    {
        int p, q;
        cin >> p >> q;
        int check = q - p;
        if (check >= 2)
        {
            room++;
        }
    }
    cout << room << endl;
    return 0;
}