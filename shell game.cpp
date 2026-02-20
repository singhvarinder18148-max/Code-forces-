#include <iostream>
using namespace std;
int main()
{
    int bowl;
    cin >> bowl;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        if (bowl == a)
        {
            bowl = b || bowl =

                       3;
        }
        else if (bowl == b)
        {
            bowl = a;
        }
    }
    cout << bowl << endl;
    return 0;
}