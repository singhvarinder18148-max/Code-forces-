#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    for (char c : s)
    {
        char lower_c = tolower(c);
        if (lower_c == 'a' || lower_c == 'o' || lower_c == 'y' ||
            lower_c == 'e' || lower_c == 'u' || lower_c == 'i')
        {
            continue;
        }
        else
        {
            result += '.';
            result += lower_c;
        }
    }

    cout << result << endl;

    return 0;
}