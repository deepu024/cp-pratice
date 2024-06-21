#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int size;
    cin >> size;
    vector<vector<int>> stops(size, vector<int>(2, 0));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> stops[i][j];
        }
    }

    int max = INT_MIN;

    int current = 0;

    for (int i = 0; i < size; i++)
    {
        current -= stops[i][0];
        current += stops[i][1];

        if (current > max)
        {
            max = current;
        }
    }

    cout << max;
    return 0;
}