#include <iostream>
using namespace std;

string convertToUpper(string &str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    return str;
}

int main()
{
    string str;

    cin >> str;

    if (str.size() > 0)
    {
        cout << convertToUpper(str);
    }
    else
    {
        cout << str;
    }

    return 0;
}