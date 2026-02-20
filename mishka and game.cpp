#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int M = 0;
    int C = 0;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            M++;
        }
        if (b > a)
        {
            C++;
        }
    }
    if (M > C)
    {
        cout << "Mishka" << endl;
    }
    else if (C > M)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}