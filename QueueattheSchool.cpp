#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char que[n];

    int t;
    cin >> t;

    int boys[n];
    int boysCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> que[i];
        if (que[i] == 'B')
        {
            boys[boysCount] = i;
            boysCount++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < boysCount; j++)
        {
            int boyLocation = boys[j];
            if (boyLocation + 1 < n && que[boyLocation + 1] == 'G')
            {
                swap(que[boyLocation], que[boyLocation + 1]);
                boys[j]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << que[i];
    }

    return 0;
}