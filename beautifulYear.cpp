#include <iostream>
using namespace std;

bool check_dist(int num)
{
    int arr[10] = {0};
    while (num != 0)
    {
        int sum = num % 10;
        arr[sum]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = n + 1; true; i++)
    {
        if (check_dist(i))
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}