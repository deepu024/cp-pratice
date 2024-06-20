#include <iostream>
using namespace std;

bool is_lucky_number(const string &num_str)
{
    for (char c : num_str)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }
    return true;
}

string is_nearly_lucky_number(long long int n)
{
    string str = to_string(n);
    long long int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }

    string lucky_count_str = to_string(count);
    return is_lucky_number(lucky_count_str) ? "YES" : "NO";
}

int main()
{
    long long int n;
    cin >> n;
    cout << is_nearly_lucky_number(n) << endl;
    return 0;
}