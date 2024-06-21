#include <iostream>
#include <vector>
using namespace std;

int findOpenDoor(vector<vector<int>> &doors, int size, int state)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (doors[i][state] == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;
    cin >> size;
    vector<vector<int>> doors(size, vector<int>(2, 0));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> doors[i][j];
        }
    }

    int leftOpenDoors = findOpenDoor(doors, size, 0);
    int rightOpenDoors = findOpenDoor(doors, size, 1);

    int leftClose = size - leftOpenDoors;
    int rightClose = size - rightOpenDoors;

    int ans = min(leftOpenDoors, leftClose) + min(rightOpenDoors, rightClose);

    cout << ans;

    return 0;
}