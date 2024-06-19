#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x = -1;
    int y = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
                break;
            }
        }
    }

    int val1 = abs(x - 2);
    int val2 = abs(y - 2);
    cout << val1 + val2 << endl;
    return 0;
}