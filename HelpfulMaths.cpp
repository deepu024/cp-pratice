#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string str;
    cin >> str;
    vector<int> values;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+')
        {
            values.push_back(str[i] - '0');
        }
    }

    sort(values.begin(), values.end());

    string ans = "";

    for (int i = 0; i < values.size(); i++)
    {
        ans += to_string(values[i]);
        if (i != values.size() - 1)
        {
            ans += "+";
        }
    }

    cout << ans;
    return 0;
}