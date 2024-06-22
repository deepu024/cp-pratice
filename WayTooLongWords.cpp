#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> lines(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lines[i];
    }

    vector<string> ans;

    for (int i = 0; i < n; i++)
    {

        string line = lines[i];
        int count = 0;
        for (int j = 0; j < line.size(); j++)
        {
            count++;
        }

        if (count > 10)
        {
            string res = line[0] + to_string(count - 2) + line[count - 1];
            ans.push_back(res);
        }
        else
        {
            ans.push_back(line);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}