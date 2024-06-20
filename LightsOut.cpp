#include <iostream>
#include <vector>
using namespace std;

void toggle(vector<vector<int>> &grid, int x, int y)
{
    if (x >= 0 && x < 3 && y >= 0 && y < 3)
    {
        grid[x][y] ^= 1;
    }
}

int main()
{
    vector<vector<int>> presses(3, vector<int>(3));
    vector<vector<int>> grid(3, vector<int>(3, 1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> presses[i][j];
        }
    }
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (presses[i][j] % 2 != 0)
            {
                toggle(grid, i, j);
                for (const auto &dir : directions)
                {
                    int newX = i + dir.first;
                    int newY = j + dir.second;
                    toggle(grid, newX, newY);
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}