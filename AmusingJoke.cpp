#include <iostream>
#include <vector>
using namespace std;

void markChar(vector<int> &arr, string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        arr[int(str[i] - 'A')]++;
    }
}

void removeChar(vector<int> &arr, string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        arr[int(str[i] - 'A')]--;
    }
}

int main()
{
    string s1;
    string s2;
    string s3;

    cin >> s1 >> s2 >> s3;

    vector<int> arr(26, 0);

    markChar(arr, s1);
    markChar(arr, s2);

    removeChar(arr, s3);

    for (int i = 0; i < 26; i++)
    {

        if (arr[i] != 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}