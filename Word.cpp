#include <iostream>
using namespace std;

string convertToUpper(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

string convertToLower(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main()
{

    string word;
    cin >> word;

    int upperCount = 0;
    int lowerCount = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            upperCount++;
        }
        else
        {
            lowerCount++;
        }
    }

    if (upperCount <= lowerCount)
    {
        cout << convertToLower(word);
    }
    else
    {
        cout << convertToUpper(word);
    }

    return 0;
}