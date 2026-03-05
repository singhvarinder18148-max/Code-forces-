#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int upper = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            upper++;
        }
    }

    int lower = s.size() - upper;

    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}