#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string m;
    cin >> m;

    string sum = "";

    for (int i = 0; i < m.size(); i++)
    {
        char mChar = m[i];
        char nChar = n[i];

        int ans = (int(mChar) - 48 ^ int(nChar) - 48);

        sum += to_string(ans);
    }

    cout << sum;

    return 0;
}