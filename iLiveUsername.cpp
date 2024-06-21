#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int size;
    cin >> size;

    vector<int> contestes(size);

    for (int i = 0; i < size; i++)
    {
        cin >> contestes[i];
    }

    int max = contestes[0];
    int min = contestes[0];

    int count = 0;

    for (const auto &contest : contestes)
    {
        if (contest > max)
        {
            max = contest;
            count++;
        }
        if (contest < min)
        {
            min = contest;
            count++;
        }
    }

    cout << count;

    return 0;
}