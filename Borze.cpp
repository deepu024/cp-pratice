#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;

    string ans = "";

    for (int i = 0; i < n.size(); i++)
    {
        ans += n[i];
        if (ans == ".")
        {
            cout << "0";
            ans = "";
        }
        else if (ans == "-.")
        {
            cout << "1";
            ans = "";
        }
        else if (ans == "--")
        {
            cout << "2";
            ans = "";
        }
    }

    return 0;
}