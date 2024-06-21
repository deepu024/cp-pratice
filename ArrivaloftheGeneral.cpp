#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= minNum)
        {
            minNum = arr[i];
            minIndex = i;
        }
    }

    if (maxIndex == 0 && minIndex == n - 1)
    {
        cout << 0;
        return 0;
    }

    if (maxIndex < minIndex)
    {
        int ans = (abs(minIndex - (n - 1)) + abs(maxIndex - 0));
        cout << ans;
        return 0;
    }

    int ans = (abs(minIndex - (n - 1)) + abs(maxIndex - 0)) - 1;

    cout << ans;
    return 0;
}